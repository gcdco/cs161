/*****************************************************************************
** Author:	    George Duensing
** Date:	      July 03, 2019
** Description:	Asks the user to enter a temperature in Fahrenheit,
** 							converts temperature to Celcius, and displays result.
*****************************************************************************/
#include <iostream>

int main()
{
  //Declare variables to store temperatures
  double faTemp, cTemp;

  //Prompt the user for a Celcius temperature
  std::cout << "Please enter a Celsius temperature.\n";

  //Store the value in cTemp
  std::cin >> cTemp;

  //Convert C to F degrees and store it in faTemp
  faTemp = 9.0 / 5 * cTemp + 32;

  //Display Fahrenheit temperature to user
  std::cout << "The equivalent Fahrenheit temperature is:\n"
            << faTemp << "\n";

  //Terminate program
  return 0;

}
