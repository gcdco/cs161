#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    //Define variables
    //min & max to hold the min/max values
    //value to hold the user inputed value
    //numInteger to hold the # of user inputed integers
    int min,
    max,
    value,
    numInteger;
    
    //Print Question to user and store value in numInteger
    cout << "How many integers would you like to enter?\n";
    cin >> numInteger;
    
    //Print instructions to start user input and store input in value
    cout << "Please enter " << numInteger << " integers.\n";
    cin >> value;
    
    //Initialize min and max values with the first integer the user enters
    //to have a starting point for comparison
    min = value;
    max = value;
    
    //This loop begins the user input.
    //Loop runs until it reaches the # of integers the user wants to input.
    //The counter starts at 2 because the user already entered one value
    //which is used to initialize min & max so as not to have any
    //erroneous behavior comparing values for min & max.
    for (int counter = 2; counter <= numInteger; counter++)
    {
        //get the user value
        cin >> value;
        
        if (value > max) //Check whether the user inputted value is larger than the current max
        {
            max = value; //If true: store value in max
        } //if
        
        if (value < min) //Check whether the user inputted value is less than the current min
        {
            min = value; //If true: store value in min
        } //if
        
    } //for
    
    //Print the values determined by the for loop to be minimum and maximum
    cout << "min: " << min;
    cout << "\nmax: " << max << "\n";
    
    return 0; //End program
} //main
