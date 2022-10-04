/*
  Name: Blaise Muhune
  Class: CPTR-252
  Date: 2/14/2022
  Description:  check what will happen to the Substance at a given temperature
*/
import java.util.Scanner;

class Main {
  public static void main(String[] args) 
  {
    //declare
    double temperature;

    //populate
    Scanner keyboard = new Scanner(System.in);

    System.out.println("type the temperature: ");
    temperature = keyboard.nextDouble();
    
    // create a Substance class
    Substance mySubstance = new Substance(temperature);

  //display
  if(mySubstance.isEthyFreezing())
    System.out.println("Ethyl alcohol is going to freeze");
  
  if(mySubstance.isOxygenFreezing())
    System.out.println("Oxygen is going to freeze");

  if(mySubstance.isWaterFreezing())
    System.out.println("Water is going to freeze");

  if(mySubstance.isEthyBoiling())
    System.out.println("Ethyl alcohol is going to freeze");

  if(mySubstance.isOxygenBoiling())
    System.out.println("Oxygen is going to freeze");
  
  if(mySubstance.isWaterBoiling())
    System.out.println("Oxygen is going to freeze");  


  }
}