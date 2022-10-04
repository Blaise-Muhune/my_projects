/**************************************
Name: Blaise Muhune
Class: CPTR 252
DATE: 3/11/2022
Description: this program create a linkedList class
***************************************/
public class LinkedList
{
 private class Node
 {
   String value;
   Node next;

 Node(String val, Node n)
 {
   value = val;
   next = n;
 }

 Node(String val)
 {
   this(val, null);
 }
 }

 private Node first;
 private Node last;

 public LinkedList()
 {
   first = null;
   last = null;
 }

/**************************************
*. Return if empty or not
*
***************************************/
 public boolean isEmpty()
 {
   return first == null;
 }

/**************************************
*determine the number of elements in the LinkedList
*
***************************************/
 public int size()
 {
   int count = 0;
   Node currentNode = first;

 while (currentNode != null) // is there an element at currentNode
 {
   count ++;
   currentNode = currentNode.next;
 }
 return count;
 }

 /**************************************
* Add NODE to linked list, to the end
*
***************************************/
 public void add(String e)
 {
 if (isEmpty())
 {
   first = new Node(e);
   last = first;
 }
 else
 {
   last.next = new Node(e);
   last = last.next;
 }
 }
/**************************************
*Add NODE to LinkedList by location
*
***************************************/
 public void add(int index, String e) //adds element at a position in the list
 {
 if (index < 0 || index > size())
 {
 System.out.println ("Index is out of bounds");
 }
 if (index == 0)
 {
 first = new Node(e, first);
 if (last == null)
 last = first;
 }

 //inch down the LL using a temp variable "pred" for predecessor to the new node just added
 Node pred = first;

 for (int k = 1; k <= index-1; k++)
 {
   pred = pred.next;
 }

 pred.next = new Node (e, pred.next); //call constructor & splice in node with new element value

 if (pred.next.next == null) //check to see if there is a new last element or node
   last = pred.next;
 }

/**************************************
* Remove by location
*
***************************************/
 public String remove(int index)
 {
   if (index < 0 || index >= size())
   {
     System.out.println ("Index is out of bounds");
   }

 String element; //used to contain the value removed and eventually return to the call

 if (index == 0)
 {
   element = first.value;
   first = first.next;
   if (first == null)// removed the node if there is only one node.
     last = null;
 }
 else
 {
 // remove an element other than first, need to find predecessor to the element to remove
   Node pred = first;

 for (int k = 1; k <= index -1; k++)
   pred = pred.next;
  
   element = pred.next.value; //store value to return
  
   pred.next = pred.next.next; //route link around the node to be removed

 if (pred.next == null)
   last = pred;
 }
   return element;
 }

/**************************************
*Remove by value
*
***************************************/
 public boolean remove(String element)
 {
 if (isEmpty())
   return false;

 if (element.equals(first.value))
 {
 //remove first item in list
 first = first.next;
 if (first == null)
   last = null;
   return true;
 }

 Node pred = first;

 while (pred.next != null && !pred.next.value.equals(element))// here the && work as ana "or"
 {
   pred = pred.next;
 }

 if (pred.next == null)
   return false; //not in list

 pred.next = pred.next.next; //pred.next.value is the element to be removed

 if (pred.next == null)
   last = pred; //incase it was the last element in the list, then new last

 return true;
 }
/**************************************
* print – alternative to toString method
*
***************************************/
 public void print()
 {
   Node p = first;
   while (p != null)
 {
   System.out.println("test: " + p.value);
   p = p.next;
 }
 }

/**************************************
*. To String to display the output by address
*
***************************************/
public String toString()
 {
 StringBuilder strBuilder = new StringBuilder();
 Node p = first;
 while (p!=null)
 {
   strBuilder.append(p.value + "\n");
   p=p.next;
 }
 return strBuilder.toString();
 }

}
