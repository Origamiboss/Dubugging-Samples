/*This is the visual studio example code

We will be looking at the breakpoints, output and many other tools that visual studio provides in this program.
In this program we will be making a guessing game. The user will guess a number between 1-100 and the program will tell them if
they are getting closer or not. Needless to say, there are some errors in it.
*/
/*
#include "Header.h"
#include <iostream>
#include <Math.h>
using namespace std

//declaring functions
int randomNumber(int);
string checkNumber(int, int);

void VisualStudioMain() {
	char goAgain = 'y';
	//get a random number
	int ran = randomNumber(99);
	//check if user wants to quit
	while (goAgain == 'y' || goAgain == 'Y') {
		int guess;
		cout << "Guess a number between 1 and 100: ";
		cin >> guess;
		string response = checkNumber(guess, ran);
		cout << response;
		//reset game
		if (response == "You Got the Answer Right!\n") {
			cout << "Do you want to play again (y=yes|n=no)? ";
			cin >> goAgain;
			ran = randomNumber(100);
		}
	}
}
int randomNumber(int max) {
	int ran;
	ran = rand() / max;
	return ran;
}
string checkNumber(int num, int ran) {
	string returnstring;
	if (num > ran) {
		//the guess is greater than the random number
		return "Lower\n";
	}
	else if(num < ran) {
		return "Higher\n";
	}
	else {
		return "You Got the Answer Right!\n";
	}
}
*/
