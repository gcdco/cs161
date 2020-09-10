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

#ifndef BOX_HPP // Start include guard
#define BOX_HPP

class Box
{
    private:
        // Declare variables
        double height;
        double width;
        double length;
    
    public:
        Box();  // Default Constructor
        Box(double, double, double); // Constructor to inialize Box w/ Height, Width, Length
    
        // Function prototypes
        void setHeight(double);
        void setWidth(double);
        void setLength(double);
        double calcVolume();
        double calcSurfaceArea();
    
};

#endif // End include guard
/* BOX_HPP */
