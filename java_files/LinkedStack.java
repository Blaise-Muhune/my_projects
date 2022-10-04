 /**
Name.Blaise Muhune
Class. CPTR 252
Date. 3/30/2022
Desc. This program demonstrates how to write and
 use a stack class based on linked lists.
 */

 class LinkedStack
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
 }

 private Node top = null; 

 public boolean empty()
 {
 return top == null;
 }

 public void push(String s)
 {
 top = new Node(s, top);
 }

 public String pop()
 {
 if (empty())
 throw new EmptyStackException();
 else
{
 String retValue = top.value;
 top = top.next;
 return retValue;
 }
 }

 public String peek()
 {
 if (empty())
 throw new EmptyStackException();
 else
 return top.value;
 }

 public String toString()
 {
 StringBuilder sBuilder = new StringBuilder();
 Node p = top;
 while (p != null)
 {
 sBuilder.append(p.value);
 p = p.next;
 if (p != null)
 sBuilder.append("\n");
 }
 return sBuilder.toString();
 }
 }
