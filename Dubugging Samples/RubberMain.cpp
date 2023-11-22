//This is the Rubber Ducky Debugging Main Code
/*
Vincent Climer
GitHub: https://github.com/Origamiboss/Dubugging-Samples.git

The purpose of this code is to get input from the user into three integers x, y, and z.
We will then calculate the equation x+y*z and display the results in comparision to 50.
The problem here is that the wrong number is being calculated.
Use rubber ducky debugging to solve the problem!
*/

#include <iostream>
#include "Header.h"
using namespace std;

void RubberMain() {
	int overallInt;
	int x;
	int y;
	int z;
	//Gather input
	cout << "Input Number X: ";
	cin >> x;
	cout << "Input Number Y: ";
	cin >> y;
	cout << "Input Number Z: ";
	cin >> z;
	//Do Expression x+y*z
	x *= 7;
	overallInt = x + y * z;
	//See if its over 50
	if (overallInt > 50) {
		cout << "The Number: " << overallInt << " is greater than 50" << endl;
	}
	else if (overallInt < 50) {
		cout << "The Number: " << overallInt << " is greater lesss than 50" << endl;
	}
	else {
		cout << "The Number: " << overallInt << " equals 50" << endl;
	}
}
