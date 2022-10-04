/*
  Name: Blaise Muhune
  Class: CPTR-252
  Date: 2/14/2022
  Description:  create the ship class
*/
public class Ship
{

  private String name;
  private String year;

  //constructor
  public Ship(String newName, String  newYear)
  {
    this.name = newName;
    this.year = newYear;
  }

  public void setYearBuilt(String newYear)
    {
        this.year = newYear;
    }

    public void setShipName(String newName)
    {
        this.name = newName;
    }

    public String getShipName()
    {
        return this.name;
    }

    public String getYearBuilt()
    {
        return this.year;
    }

    public String toString()
    {
        return ("Ship: " + this.name + " - Built: " + this.year);
    }

}