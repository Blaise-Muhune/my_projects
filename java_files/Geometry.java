/*
  Name: Blaise Muhune
  Class: CPTR-252
  Date: 23/2/2022
  Description:  perform geometric formilas
*/
public class Geometry
{

  public static double areaCircle(double radius)
  {
    return 3.14 * radius * radius;    
  }

  public static double areaRectangle(double length, double width)
  { 
  return length * width;
}

  public static double areaTriangle(double len, double base, double height)
    {
      return base * height * len * 0.5;
    }
}