/**************************************
Name: Blaise Muhune
Class: CPTR 252
DATE: 3/11/2022
Description: this program demotrate linked list features,
***************************************/
import java.util.Scanner;
class Main
{ 
  public static void main(String[] args)
  {
    // declare
    Scanner keyboard = new Scanner(System.in);
    
     LinkedList ll = new LinkedList();
    for( int i = 0; i < 5; i ++)
      {
        System.out.println("enter a name to add to the list");
  
        ll.add(keyboard.next());
      }
     //Display
     System.out.println("the members of the list are: ");
     System.out.println(ll);
     ll.add(3, "philip");
     ll.add(5, "Gabriel");
     System.out.println("Add Location: the members of the list are: ");
     System.out.println(ll);
    
     ll.remove("job");
     System.out.println("Remove Name: the members of the list are: ");
     System.out.println(ll);
     ll.remove(2);
     System.out.println("Removed Element at specific location\n the members of the list are: ");
     System.out.println(ll);
  }
}