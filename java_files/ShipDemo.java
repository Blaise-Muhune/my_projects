/*
  Name: Blaise Muhune
  Class: CPTR-252
  Date: 2/14/2022
  Description:  Demonstrate Ship, CruiseShip, and CargoShip classes
*/
class Main {
  public static void main(String[] args) {

    //declare and populate
    Ship[] ships = new Ship[3];
    ships[0] = new CargoShip("lolli pop", "2321", 2000);
    ships[1] = new CruiseShip("love boart", "321", 200);
    ships[2] = new Ship("myboat", "1999");

    //display
    System.out.println("\n\nSHIP LIST\n");
    for(int i = 0; i < ships.length; i++)
    {
      System.out.println(ships[i]);
    }


  }
}