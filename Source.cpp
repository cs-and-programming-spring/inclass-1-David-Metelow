


/***********************************************
* Name: David Alexander Metelow
* Email: metelo69@students.rowan.edu
***********************************************
* Purpose:
*  This program calculates circumference of circle
***********************************************/

#include <iostream>

using namespace std; 

const double PI = 3.14159;
const double CONV = 1.6;
const double CCONV = 1.8;
int main()
{

	double miles, kilometers, meters, centimeters, millimeters, radius, circumference, celcius, fahren, year, days, months, hours, minutes, seconds;
	//Display purpose of the program
	cout << " ******************************************" << endl;
	cout << " This program takes in miles and converts them to kilometers" << endl;
	cout << " ******************************************\n\n";

	//Get user input
	cout << "Please input miles: ";
	cin >> miles;

	//compute conversion miles to kilometers
	kilometers = miles * CONV;
	meters = (miles * CONV) * 1000;
	centimeters = (miles * CONV) * 100000;
	millimeters = (miles * CONV) * 1000000;

	//Display the kilometers 
	cout << "kilometers = " << kilometers << "\n\n";
	cout << "meters = " << meters << "\n\n";
	cout << "centimeters = " << centimeters << "\n\n";
	cout << "millimeters = " << millimeters << "\n\n";

	//Display purpose of the program
	cout << " ******************************************" << endl;
	cout << " This program takes in radius to compute circumference of circle" << endl;
	cout << " ******************************************\n\n";

	//Get user input
	cout << "Please input radius: ";
	cin >> radius;

	//Compute circumference to PI*radius*2
	circumference = PI * radius * 2;

	//Display the circumference 
	cout << " The circumference is = " << circumference << "\n\n";

	//Display purpose of the program
	cout << " ******************************************" << endl;
	cout << " This program takes in celcius to convert to fahrenheit" << endl;
	cout << " ******************************************\n\n";

	//Get user input
	cout << "Please input Celcius: ";
	cin >> celcius;

	//compute conversion
	fahren = (celcius * CCONV) + 32;

	//Display fahrenheit
	cout << "fahrenheit = " << fahren << "\n\n";

	//Display purpose of the program
	cout << " ******************************************" << endl;
	cout << " This program converts years to equivalent months, days, hours, minutes, and seconds" << endl;
	cout << " ******************************************\n\n";

	//Get user input
	cout << "Please input Years: ";
	cin >> year;

	//compute conversion
	months = 12 * year;
	days = 365.25 * year;
	hours = 8766 * year;
	minutes = 525960 * year;
	seconds = 31557600 * year;

	//Display conversion
	cout << "months = " << months << "\n\n";
	cout << "days = " << days << "\n\n";
	cout << "hours = " << hours << "\n\n";
	cout << "minutes = " << minutes << "\n\n";
	cout << "seconds = " << seconds << "\n\n";

	cout << "Program has ended" << endl;

	//Display purpose of the program
	cout << " ******************************************" << endl;
	cout << " The purpose of this program is display the first letter of my middle name" << endl;
	cout << " ******************************************\n\n";

	//Letter in asterik form
	cout << "  **  " << "\n\n";
	cout << " *  * " << "\n\n";
	cout << " *  * " << "\n\n";
	cout << " **** " << "\n\n";
	cout << " *  * " << "\n\n";
	cout << "*    *" << "\n\n";
	system("pause");

	return 0;
}