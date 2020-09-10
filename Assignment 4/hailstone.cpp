/**************************************************
 *                hailstone
 *
 * Takes the starting integer as a parameter and
 * returns how many steps it takes to reach 1
 * using the hailstone sequence.
 *
 * Author:        George Duensing
 * Date:          July 15, 2019
 **************************************************/

int hailstone(int number)
{
    // Define integer to hold number of steps
    int counter = 0;
    
    // Check if the value is 1.
    // If it is, then the user already entered 1 and there is no need to proceed.
    // Otherwise, loop until number is 1, and update number of steps
    // it took to reach 1.
    while (number != 1)
    {
        if (number % 2 == 0) // The number is even
        {
            number = number / 2; // Calculate next number in sequence.
        } //if
        
        else // The number is odd.
        {
            number = number * 3 + 1; // Calculate next number in sequence.
        }//else
        
        counter++;  // Update the number of steps taken.
    } //while
    
    return counter;
    
} // End hailstone
