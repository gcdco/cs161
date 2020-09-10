/**************************************************
 *                smallSort
 *
 * This function takes 3 reference parameters and
 * sorts them into ascending order.
 *
 * Author:        George Duensing
 * Date:          July 15, 2019
 **************************************************/

#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

// Function prototype
int smallSort(int&, int&, int&);

int main()
{
    int first = 14,
        second = -90,
        third = 2;
    
    smallSort(first, second, third);
    cout << "\nIn ascending order: " << first << " , " << second << " , " << third << endl;
    
    for (int i = 0; i < 5; i++) {
        cout << "Enter 3 values: ";
        cin >> first >> second >> third;
        
        smallSort(first, second, third);
        cout << "\nIn ascending order: " << first << " , " << second << " , " << third << endl;
        
    }
    
    return 0;
    
}

int smallSort(int& first, int& second, int& third)
{
    // Initialize variable to hold value temporarily
    int temp = 0;
    
    // Use a pre-test loop to check that the inital values are out of order.
    // There is no need to sort if the values are already in ascending order.
    // Loop until the condition: first > second OR second > third is false.
    // If false, they are in ascending order.
    // If true, they need to be sorted again.
    while (first > second || second > third)
    {
        if (first > second) // Check if first > second
        {
            // Swap first with second
            temp = first;
            first = second;
            second = temp;
            
        }//if
        
        if (second > third) // Check if second > third
        {
            // Swap second with third
            temp = second;
            second = third;
            third = temp;
            
        }//if
        
    }//while
} // end function smallSort
