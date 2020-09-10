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
//
//  main.cpp
//  Taxicab
//

#include <iostream>
#include <cmath>
#include "Taxicab.hpp"
using namespace std;


int main()
{
        
    Taxicab cab1;
    Taxicab cab2(5, -8);
    cab1.moveX(3);
    cab1.moveY(-4);
    cab1.moveX(-1);
    int dist = cab1.getDistanceTraveled();
    cab2.moveY(7);
    int y = cab2.getYCoord();
   // ASSERT_TRUE(dist == 8 && y == -1);
    
    cout << "<------------------------------------->" << endl;
    cout << "Dist = " << dist << endl;
    cout << "Y = " << y << endl;

    return 0;
}
