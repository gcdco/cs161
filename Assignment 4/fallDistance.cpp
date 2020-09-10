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
