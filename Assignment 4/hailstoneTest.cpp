#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

// Function prototype
int hailstone(int);

int main()
{
    int number = 0,
    steps = 0;
    
    
    cout << "Plz enter a number: ";
    cin >> number;
    
    steps = hailstone(number);
    
    cout << "\nIt took " << steps << " steps." << endl;
    
    return 0;
}


int hailstone(int number)
{
    // Define integer to hold number of steps
    int counter = 0;
    
    // Check if the value is 1.
    // If it is then the desired number is already there and return.
    // Otherwise, loop until number is 1, and update number of steps
    // it took to reach 1.
    while (number != 1)
    {
        cout << number << endl; // Debugging delete after
        
        if (number % 2 == 0)    // The number is even
        {
            number = number / 2;
        }//if
        
        else    // The number is odd.
        {
            number = number * 3 + 1;
        }//else
        
        counter++;
    }//while
    
    return counter;
    
} // end hailstone
