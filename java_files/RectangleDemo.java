/*
  Name: Blaise Muhune
  Class: CPTR-252
  Date: 2/6/2022
  Description:  This program uses the setLength, setWidth, getLength, 
  getWidth, and getArea methods from the Rectangle Class.
*/

import java.util.Scanner;
 public class RectangleDemo
 {
    public static void main(String[] args)
    {
    // popute object with new triangle.
    Rectangle box = new Rectangle();
    Scanner keyboard = new Scanner(System.in);
        
    System.out.pirntln("enter the length: ");
    length = keyboard.nextDouble;
        
    System.out.pirntln("enter the width: ");
    width = keyboard.nextDouble;

    // Setting the length
    box.setLength(length);
    box.setWidth(width);

    // Display 
    System.out.println("the length of the box is " +
    box.getLength());

    System.out.println("the width of the box is " +
    box.getWidth());

    System.out.println("the area of the box is " +
    box.getArea());
    }
 }