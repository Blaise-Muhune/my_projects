 /**
Name.Blaise Muhune
Class. CPTR 252
Date. 3/30/2022
Desc.This class demonstrates the
use of the ArrayStack class.
 */

 public class ArrayStackDemo
 {
 public static void main(String [] arg)
 {
   //declare
 String str;
 ArrayStack st = new ArrayStack(5);
 str = "Pushing 10 20 onto the stack.";
 System.out.println(str);
 st.push(10);
 st.push(20);
 str = "Value at top of the stack is ";
 System.out.println(str + st.peek());
 str = "Popping and printing all values:";
   //display
    System.out.println(str);
 while (!st.empty())
   System.out.print(st.pop() + " ");
 }
 }