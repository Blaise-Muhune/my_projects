
import java.util.Scanner;
class Main {
  public static void main(String[] args) {
    double radius;


    Scanner keyboard = new Scanner(System.in);
    System.out.println("enter the radius: ");
    radius = keyboard.nextDouble();


    Circle myCircle = new Circle(radius);
    
    System.out.println("The area is " + myCircle.getArea());
    System.out.println("The diameter is " + myCircle.getDiameter());
    System.out.println("The circumference is " + myCircle.getCircumference());
  }
}