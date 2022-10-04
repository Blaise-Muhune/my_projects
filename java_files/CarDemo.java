
import java.util.Scanner;
class Main {
  public static void main(String[] args) {
    //declare
    int year;
    String make;

    //populate
    Scanner keyboard = new Scanner(System.in);

    System.out.println(" what year is your car's model: ");
    year = keyboard.nextInt();

    System.out.println(" what is the make: ");
    make = keyboard.next();
    // create a Car class in myCar variable.
    Car myCar = new Car(year, make);

    for(int i = 0; i < 5; i++)
    {
    myCar.setSpeed();
    System.out.println(myCar.getSpeed());
    }

    for(int i = 0; i < 5; i++)
    {
    myCar.setBreak();    
    System.out.println(myCar.getSpeed());
    }
    
  }
}