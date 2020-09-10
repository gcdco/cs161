#include <iostream>
#include <iomanip>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

// Function prototype
double fallDistance(double);

int main()
{
    double seconds = 0;
    double meters = 0.0;
    
    cout << "\nEnter the time in seconds \n";
    cin >> seconds;
    
    cout << "\nCall the Function \n";
    
    meters = fallDistance(seconds);
    
    cout << "The distance in meters is " << meters << endl;
    
    
    return 0;
}

/**************************************************
 *                fallDistance
 *
 *  This function takes a double value for seconds
 *  and calculates the fall distance in meters.
 *
 * Author:        George Duensing
 * Date:          July 15, 2019
 **************************************************/

double fallDistance(double seconds) // Function takes a double parameter for seconds
{
    const double G = 9.8;   // Variable constant for earth's gravity
    double meters = 0.0;    // Variable for fall distance
    
    meters = 0.5 * G * (seconds * seconds); // Calculate the fall distance
    
    return meters;  // Return fall distance in meters
}
