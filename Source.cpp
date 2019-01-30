


/***********************************************
* Name: David Alexander Metelow
* Email: metelo69@students.rowan.edu
***********************************************
* Purpose:
*  This program calculates circumference of circle
***********************************************/

#include <iostream>

using namespace std; 

const  float PI = 3.14159;
const  float CONV = 1.6;

int main()
{

	float miles, kilometers, meters, centimeters, millimeters, radius, circumference;
	//Display purpose of the program
	cout << " ******************************************" << endl;
	cout << " This program takes in miles and converts them to kilometers" << endl;
	cout << " ******************************************\n\n";
	
	//Get user input
	cout << "Please input miles: ";
	cin >> miles;

	//compute conversion miles to kilometers
	kilometers = miles / CONV;
	meters = (miles / CONV) * 1000;
	centimeters = (miles / CONV) * 100000;
	millimeters = (miles / CONV) * 1000000;

	//Display the kilometers 
	cout << "kilometers = " << kilometers << "\n\n";
	cout << "meters = " << meters << "\n\n"; 
	cout << "centimeters = " << centimeters << "\n\n";
	cout << "millimeters = " << millimeters << "\n\n";

	//Display purpose of the program
	cout << " ******************************************"<<endl;
	cout << " This program takes in radius to compute circumference of circle" <<endl;
	cout << " ******************************************\n\n";
	
	//Get user input
	cout << "Please input radius: ";
	cin >> radius;
	
	//Compute circumference to PI*radius*2
	circumference = PI*radius*2  ; 
	
	//Display the circumference 
	cout << " The circumference is = " << circumference << "\n\n";
	cout << "Program has ended"<<endl;

	system("pause");
	
	return 0;
}