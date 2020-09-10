/*****************************************************************************
** Author:	    George Duensing
** Date:	      July 03, 2019
** Description:	Asks the user for four numbers, computes the average, and
** 							displays the average.
*****************************************************************************/
#include <iostream>

int main()
{
	//Declare 4 double variables to hold the user numbers
	//and avg to hold the average.
	double num1, num2, num3, num4, avg;

	//Output directions for the user
	std::cout << "Please enter four numbers.\n";
	//Store the user values in their respective variables
	std::cin >> num1;
	std::cout;	//To allow new values on subsequent lines
	std::cin >> num2;
	std::cout;	//To allow new values on subsequent lines
	std::cin >> num3;
	std::cout;	//To allow new values on subsequent lines
	std::cin >> num4;

	//Calculate the average of 4 numbers and store it in variable avg
	avg = (num1 + num2 + num3 + num4) / 4;

	//Display the average to the user
	std::cout << "The average of those numbers is:" << std::endl << avg
						<< std::endl;

	return 0;

}
