/*
  Name: Blaise Muhune
  Class: CPTR-252
  Date: 23/2/2022
  Description:  perform geometric formilas
*/
import java.util.Scanner;
class Main {
  public static void main(String[] args) {
    int choice;
    double length, width;
    double len, base, height;
    double radius;
    double area;
    
    Scanner keyboard = new Scanner(System.in);
    System.out.println("1. circle area \n2. rectangle area\n3. triangle area\n\n\npick one: ");
    choice = keyboard.nextInt();

    System.out.println("Enter positve value only ");
    

    
      if(choice == 1){
        System.out.println("what is the radius of the circle ");
        radius = keyboard.nextDouble();
        area = Geometry.areaCircle(radius);
        
        System.out.println("\n\nyour area is " + area);
          
      }
      else if(choice == 2)
      {
        System.out.println("enter width ");
        width = keyboard.nextDouble();
        System.out.println("enter length ");
        length = keyboard.nextDouble();
        area = Geometry.areaRectangle(length, width);
        
        System.out.println("\n\nyour area is " + area); 
      }
      else if(choice == 3)
      {
        System.out.println("enter length");
        len = keyboard.nextDouble();
        System.out.println("enter base ");
        base = keyboard.nextDouble();
        System.out.println("enter height ");
        height = keyboard.nextDouble();
        area = Geometry.areaTriangle(len, base, height);
  
        System.out.println("\n\nyour area is " + area);
      }
      else {
        System.out.println("invalid choice");
      }
    

  }
}