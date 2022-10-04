 /**
   Name: Blaise Muhune
  Class: CPTR-252
  Date: 4/1/2022
  Description:This class implements a queue based
 on linked lists.
 */

 public class LinkedQueue
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

 private Node front = null;
 private Node rear = null;

 public void enqueue(String s)
 {
  if (rear != null)
   {
     rear.next = new Node(s, null);
     rear = rear.next;
   }
 else
 {
 rear = new Node(s, null);
 front = rear;
 }
 }

 /**
 The empty method checks to see if
 the queue is empty.
 @return true if and only if queue
 is empty.
 */

 public boolean empty()
 {
 return front == null;
 }

 public String peek()
 {
 if (empty())
 throw new EmptyQueueException();
 else
 return front.value;
 }

 public String dequeue()
 {
 if (empty())
 throw new EmptyQueueException();
 else
 {
 String value = front.value;
 front = front.next;
 if (front == null) rear = null;
 return value;
  }
 }


   public String toString()
   {
   StringBuilder sBuilder = new StringBuilder();
  
   Node p = front;
   while (p != null)
   {
   sBuilder.append(p.value + " ");
   p = p.next;
   }
   return sBuilder.toString();
   }
 }