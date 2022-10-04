
import java.util.Scanner;
public class Car {
  //declare
  private double yearModel;
  private String make;
  private double speed;

  //constructor
  public Car(double yearModell, String makeCar)
  {
      yearModel = yearModell;
      make = makeCar;
      speed = 0.0;
  }

  public void setSpeed()
  {
    speed = speed+5;
  }

  public void setBreak()
  {
    speed + speed+5;
  }

  public double getSpeed()
  {
    return speed;
  }
}