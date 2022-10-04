 /**
   Name: Blaise Muhune
  Class: CPTR-252
  Date: 4/1/2022
  Description:The LinkedQueueDemo class demonstrates
 the use of the LinkedQueue class.
 */

 public class LinkedQueueDemo
 {
 public static void main(String [] args)
 {
   //declare
 LinkedQueue queue = new LinkedQueue();

 String [ ] names = {"Blaise", "Norah", "philip", "Mike"};
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

 // Add another name
 System.out.println("Adding the name Olga:");
 queue.enqueue("Olga");
 System.out.println("State of queue is: ");
 System.out.println(queue);
 }
 }
