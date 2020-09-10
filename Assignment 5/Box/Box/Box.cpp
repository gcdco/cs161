/**************************************************
 *                      Box
 *
 *      This class creates an instance of a box,
 *      with variables for height, width, length.
 *      Calculations and set methods are implemented.
 *
 * Author:        George Duensing
 * Date:          July 20, 2019
 **************************************************/

#include "Box.hpp"

// Default Constructor
Box::Box()
{
    height = width = length = 1.0;
}

// Constructor to initialize a Box obj's Height, Width, and Length
Box::Box(double h, double w, double l)
{
    height = h;
    width = w;
    length = l;
}

// Set the height
void Box::setHeight(double h)
{
    height = h;
}

// Set the width
void Box::setWidth(double w)
{
    width = w;
}

// Set the length
void Box::setLength(double l)
{
    length = l;
}

// Calculate the volume and return a double
double Box::calcVolume()
{
    return height * width * length;
}

// Calculate the surface area and return a double
double Box::calcSurfaceArea()
{
    return (2*(height * width)) + (2*(height * length)) + (2 * (width * length));
}
