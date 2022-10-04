 /**
   Name: Blaise Muhune
  Class: CPTR-252
  Date: 4/1/2022
  Description:The ArrayQueueDemo demonstrates the use of the ArrayQueue class.
 */

import java.util.Scanner;

 public class ArrayQueueDemo
 {
 public static void main(String [] args)
 {
//declare
  String addName;
 String str; 
Scanner keyboard = new Scanner(System.in);

 ArrayQueue queue = new ArrayQueue(4);
 str = "Queue has capacity ";
 System.out.println(str + queue.capacity());

 // Add 4 names
 String [ ] names
 = {"Blaise", "muhune", "Gabriel", "Shrarim"};
 System.out.println("Adding names: ");
 for (String s : names)
 {
 System.out.print(s + " ");
 queue.enqueue(s);
 }
 System.out.println("\nState of queue is: ");
 System.out.println(queue);

 // Remove 2 names
 System.out.println("Removing 2 names.");
 queue.dequeue(); queue.dequeue();
 System.out.println("State of queue is: ");
 System.out.println(queue);

 // Add a name
 System.out.println("Adding the name:");
   addName = keyboard.nextLine();
 queue.enqueue(addName);
 System.out.println("State of queue is: ");
 System.out.println(queue);
 }
 }