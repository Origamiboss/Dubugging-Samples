/*
This program is broken in such a way so that the debugger can use print functions to figure out what's wrong.
The game is supposed to be a rock paper sissors game where you can choose to play against a computer or a person.
*/
#include<iostream>
#include "Header.h"
#include <math.h>
using namespace std;
/*Rock Paper Sissor Game*/
string calculateResult(int, int);
int getPlayerInput(int);
int computerChoice();

void PrintMain() {
	char again = 'y';
	//game loop
	while (again == 'y' || again == 'Y') {
		int porc;
		cout << "Play against a player or computer (1 | 2): ";
		cin >> porc;
		if (porc == 1) {
			//player vs player
			int p1 = getPlayerInput(1);
			int p2 = getPlayerInput(2);
			cout << calculateResult(p1, p2);
		}
		else {
			//player vs computer
			int p1 = getPlayerInput(1);
			int c2 = computerChoice();
			cout << calculateResult(p1, c2);
		}



		cout << "Play again? (y for yes | n for no): ";
		cin >> again;
		cout << endl;
	};

}
//calculates the computers choice
string calculateResult(int c1, int c2) {
	string result;
	//generate result
	if ((c1 == 1 && c2 == 2) || (c1 == 2 && c2 == 1)) {
		result = "Rock beats Sissors, Player ";
		if (c1 == 1) result += "1";
		else result += "2";
		result += " wins\n";
	}
	else if ((c1 == 2 && c2 == 3) || (c1 == 3 && c2 == 2)) {
		result = "Sissors beat Paper, Player ";
		if (c1 == 2) result += "1";
		else result += "2";
		result += " wins\n";
	}
	else if ((c1 == 3 && c2 == 1) || (c1 == 1 && c2 == 3)) {
		result = "Paper beats Rock, Player ";
		if (c1 == 2) result += "1";
		else result += "2";
		result += " wins\n";
	}
	else {
		result = "Both players have chosen ";
		switch (c1) {
		case 1:
			result += "Rock";
			
		case 2:
			result += "Sissors";
			
		case 3:
			result += "Paper";
			
		default:
			result = "ERROR";
			
		}
		result += "\n";
	}
	return result;
}
//get Player Input
int getPlayerInput(int player) {
	//reset console screen
	for (int i = 0; i < 40; i++) {
		cout << endl;
	}
	cout << "Choose a item, 1- Rock, 2-Sissors, 3-Paper\n";
	cout << "Player " << player << ": ";
	int p;
	cin >> p;
	return 0;

}
//calculate the computers choice
int computerChoice() {
	int c;
	c = rand() % 3;
	cout << "Computer: " << c << endl;
	return c;
}
