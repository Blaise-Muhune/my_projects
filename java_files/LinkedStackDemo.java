 /**
Name.Blaise Muhune
Class. CPTR 252
Date. 3/30/2022
Desc. This program demonstrates LinkedStack.java
 */
public class LinkedStackDemo
 {
 public static void main(String [ ] args)
 {
  //declare
 LinkedStack st = new LinkedStack();
 System.out.println("Pushing: Blaise Mike Olga");
 System.out.println("The Stack:");
 st.push("Blaise");
 st.push("Mike");
 st.push("Olga");
   //display
 System.out.println(st);
 String name = st.pop();
 System.out.println("Pop: " + name);
 System.out.println("the Stack:");
 System.out.println(st);
 }
}