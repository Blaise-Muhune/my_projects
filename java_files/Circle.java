
public class Circle
{
  //declare
  private double radius;
  private double PI = 3.14159;

  public Circle(double givenRadius)
  {
    radius = givenRadius;
  }

  //constructor
  public Circle()
  {
    radius = 0.0;
  }

  public void setRadius(double givenRadius)
  {
    radius = givenRadius;
  }

  public double getRadius()
  {
    return radius;
  }

  public double getArea()
  {
    return PI * radius * radius;
  }

  public double getDiameter()
  {
    return radius * 2;
  }

  public double getCircumference()
  {
    return PI * radius *2;
  }
}