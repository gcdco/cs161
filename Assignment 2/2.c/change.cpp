/*****************************************************************************
** Author:	    George Duensing
** Date:	      July 03, 2019
** Description:	Program asks the user to enter an amount of change
** 						  from 0 to 99, and displays the amount of each type of coin
**              with the fewest total number of coins.
*****************************************************************************/

#include <iostream>

int main()
{
  //Declare variables
  int amtChange, quarters, dimes, nickels, pennies;

  //Prompt the user to enter the amount of change
  std::cout << "Please enter an amount in cents less than a dollar.\n";
  //Store the amount in the variable amtChange
  std::cin >> amtChange;

  //Calculate the amount of coins for each denomination
  //
  //Find the number of quarters and store it in quarters
  quarters = amtChange / 25;
  //Calculate the change left over after finding the amount of quarters
  amtChange %= 25;
  //Find the number of dimes and store it in dimes
  dimes = amtChange / 10;
  //Calculate the change left over after finding the amount of dimes
  amtChange %= 10;
  //Find the number of nickels and store it in nickels
  nickels = amtChange / 5;
  //Calculate the change left over after finding the amount of nickels
  amtChange %= 5;
  //Find the number of pennies and store it in pennies
  pennies = amtChange / 1;



  //Display the amount of each type of coin on a new line
  std::cout << "Your change will be:\n";
  std::cout << "Q: " << quarters << std::endl;
  std::cout << "D: " << dimes << std::endl;
  std::cout << "N: " << nickels << std::endl;
  std::cout << "P: " << pennies << std::endl;

  return 0;

}
