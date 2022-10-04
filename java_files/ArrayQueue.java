/*
  Name: Blaise Muhune
  Class: CPTR-252
  Date: 4/1/2022
  Description: This program create an array queue class
*/

import java.util.*;

 class ArrayQueue
 {
 private String [ ] q; 
 private int front; 
 private int rear; 
 private int size; 

 ArrayQueue(int capacity)
 {
 q = new String[capacity];
 front = 0;
 rear = 0;
 size = 0;
 }

 public int capacity()
 {
 return q.length;
 }


 public void enqueue(String s)
 {
 if (size == q.length)
 throw new QueueOverFlowException();
 else
 {
 size ++;
 q[rear] = s;
 rear ++;
 if (rear == q.length) rear = 0;
 }
 }


 public String peek()
 {
 if (empty())
   throw new EmptyQueueException();
 else
   return q[front];
 }

 public String dequeue()
 {
 if (empty())
   throw new EmptyQueueException();
 else
 {
   size--;
   // Remove from front
   String value = q[front];
  
   // Facilitate garbage collection
   q[front] = null;
  
   // Update front
   front++;
   if (front == q.length) front = 0;
  
   return value;
 }
 }

 public boolean empty()
 {
   return size == 0;
 }

 public String toString()
 {
   StringBuilder sBuilder = new StringBuilder();
   sBuilder.append("front = " + front + "; ");
   sBuilder.append("rear = " + rear + "\n");
   for (int k = 0; k < q.length; k++)
   {
   if (q[k] != null)
   sBuilder.append(k + " " + q[k]);
   else
   sBuilder.append(k + " ?");
   if (k != q.length - 1)
   sBuilder.append("\n");
   }
   return sBuilder.toString();
  }
}