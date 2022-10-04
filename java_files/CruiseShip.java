/*
  Name: Blaise Muhune
  Class: CPTR-252
  Date: 2/14/2022
  Description:  create an extended version of ship called CruiseShip
*/
public class CruiseShip extends Ship
{
    private int maxPassengers;

    //constructor
    public CruiseShip(String newName, String newYear, int newMaxPassengers)
    {
        //super get the the constructor from the ship class
        super(newName, newYear);
        maxPassengers = newMaxPassengers;
    }

    public void setNumPassengers(int newMaxPassengers)
    {
        this.maxPassengers = newMaxPassengers;
    }

    public int getNumPassengers()
    {
        return this.maxPassengers;
    }

    public String toString()
    {
        return ("Cruise Ship: " + super.getShipName() + " - # Passengers: " +
                this.maxPassengers);
    }
}