/*
  Name: Blaise Muhune
  Class: CPTR-252
  Date: 2/14/2022
  Description:  create an extended version of ship called CargoShip
*/
public class CargoShip extends Ship
{
    private int tonnage;

    //constructor
    public CargoShip(String newName, String newYear, int newTonnage)
    {
        //super get the the constructor from the ship class
        super(newName, newYear);
        this.tonnage = newTonnage;
    }

    public void setCargoCapacity(int newTonnage)
    {
        this.tonnage = newTonnage;
    }

    public int getCargoCapacity()
    {
        return this.tonnage;
    }

    public String toString()
    {
        return ("Cargo Ship: " + super.getShipName() + " - tonnage: " + this.tonnage);
    }
}