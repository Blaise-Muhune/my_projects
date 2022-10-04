 /**
Name.Blaise Muhune
Class. CPTR 252
Date. 3/30/2022
Desc. Array Implementation of a stack.
 */

 public class ArrayStack
 {
 private int [] s; 
 private int top; 

 /**
 Constructor.
 @param capacity The capacity of the stack.
 */

 public ArrayStack (int capacity)
 {
 s = new int[capacity];
 top = 0;
 }

 public boolean empty()
 {
 return top == 0;
 }


 public void push(int x)
 {
 if (top == s.length)
 throw new StackOverFlowException();
 else
 {
 s[top] = x;
 top ++;
 }
 }

 public int pop()
 {
 if (empty())
 throw new EmptyStackException();
 else
 {
 top--;
 return s[top];
 }
 }

 int peek()
 {
 if (empty())
 throw new EmptyStackException();
 else
 {
 return s[top-1];
 }
 }
 }