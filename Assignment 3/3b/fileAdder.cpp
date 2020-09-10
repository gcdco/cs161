#include <iostream>
#include <string> // Needed for Strings
#include <fstream> // Needed for file manipulation

using std::cout;
using std::cin;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::string;

int main ()
{
	string file; // Hold the provided file location
	int sum; // Hold the sum of values
	int value; // Hold the integers read from userFile

	// Initialize values
	sum = value = 0;

	// Prompt user for filename and store it in file
	cout << "Please enter your filename.\n";
	cin >> file;

	// Open ifstream object and open user specified file
	ifstream userFile;
	userFile.open(file);
	
	// Check to make sure the file opened correctly
	// and loop through the file until the end of file.
	// Add the value to the running sum.
	// Otherwise alert the user there was an error
	// opening the file.
	if (userFile)
	{
		while (userFile >> value)
			sum += value;

	// Open a new ofstream object and create a text file named "sum.txt"
	ofstream outputFile;
	outputFile.open("sum.txt");

	// write the contents of sum to "sum.txt"
	outputFile << sum;

	// Close the files that were written
	userFile.close();
	outputFile.close();

	// Alert the user the sum was written to "sum.txt"
	cout << "result written to sum.txt\n";

	} // if

	else // Error opening the file or it doesn't exit.
		cout << "could not access file\n";

	return 0;

} //main
