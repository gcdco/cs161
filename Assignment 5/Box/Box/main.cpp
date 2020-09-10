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
//
//  main.cpp
//  Box
//


#include <iostream>
#include "Box.hpp"
using namespace std;

int main()
{
    Box box1(5.0, 7.0, 14.0);
    
    double volume1 = box1.calcVolume();
    double surfaceArea1 = box1.calcSurfaceArea();

    cout << "<----------Starting-------------->"<<endl;
    cout << "Volume 1 = " << volume1 << endl;
    cout << "Surface Area 1 = " << surfaceArea1 << endl;
    
    

    
    box1.setHeight(6.0);
    box1.setWidth(10.0);
    box1.setLength(5.0);
    
    
    cout << "<----------After set methods-------------->" << endl;
    cout << "Volume 1 = " << box1.calcVolume() << endl;
    cout << "Surface Area 1 = " << box1.calcSurfaceArea() << endl;



}
