/**************************************************
 *                      Taxicab
 *
 *  This Class Creates a taxicab object whose position
 *  can be shifted in the x- & y- direction, and whose
 *  total distance is calculated.
 *
 * Author:        George Duensing
 * Date:          July 20, 2019
 **************************************************/

#include <iostream> // Needed for abs()
#include <cmath> // Include for absolute value function
#include "Taxicab.hpp"
using std::abs;

// Default Constructor
Taxicab::Taxicab()
{
    xCoord = yCoord = totalDistance = 0;
}

// Constructor
Taxicab::Taxicab(int x, int y)
{
    xCoord = x;
    yCoord = y;
    totalDistance = 0;
}

// Return the taxi's x-coordinate
int Taxicab::getXCoord()
{
    return xCoord;
}

// Return the taxi's y-coordinate
int Taxicab::getYCoord()
{
    return yCoord;
}

// Return the taxi's total distance traveled
int Taxicab::getDistanceTraveled()
{
    return totalDistance;
}

// Move taxi by x number to the left or right.
// Add distance traveled to totalDistance.
void Taxicab::moveX(int x)
{
    xCoord += x;
    totalDistance += abs(x);
}

// Move taxi by y number to up or down.
// Add distance traveled to totalDistance.
void Taxicab::moveY(int y)
{
    yCoord += y;
    totalDistance += abs(y);
}
