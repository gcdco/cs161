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

#ifndef TAXICAB_HPP // Start include guard
#define TAXICAB_HPP


class Taxicab
{
    private:
        // Declare variables
        int xCoord,
            yCoord,
            totalDistance;
    
    public:
        // Constructors
        Taxicab();
        Taxicab(int, int);
    
        // Function prototypes
        int getXCoord();
        int getYCoord();
        int getDistanceTraveled();
        void moveX(int);
        void moveY(int);
    
};

#endif // End include guard
/* Taxicab_hpp */
