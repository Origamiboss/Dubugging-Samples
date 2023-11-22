/*
Vincent Climer
GitHub: https://github.com/Origamiboss/Dubugging-Samples.git

The purpose of this program is to show off a debugging style known as cut the problem in half.
Often times, your program can get so large, you have no idea where the problem in the problem lies.
The purpose of this program is to find all of the factors of a number;
*/
#include <iostream>
#include "Header.h"
using namespace std;
//reset array
void resetArray(int*, int);
//get the first number
int getNumber();
//find the numbers
void generateFactors(int*, int);
//print the numbers
void printNumber(int*);
//check if you need to go again
char goAgainCheck();

void CutInHalfMain() {
	char goAgain;
	const int CAPACITY = 100;
	do {
		int num = getNumber();
		int* ar  = new int[CAPACITY];
		resetArray(ar, CAPACITY);
		generateFactors(ar, num);
		printNumber(ar);
		goAgain = goAgainCheck();
		delete[] ar;
	} while (goAgain == 'y' || goAgain == 'Y');
}
//reset array
void resetArray(int* ar, int cap){
	for (int i = 0; i < cap; i++) ar[i] = 0;
}
//get the first number
int getNumber() {
	cout << "Number: ";
	int n;
	cin >> n;
	return n;
}
//find the numbers
void generateFactors(int* ar, int num) {
	int temp = num;
	int temp2 = 1;
	int s = 0;
	while (temp2 < num / 2) {
		if (temp2 * temp == num) {
			ar[s] = temp2;
			ar[s+1] = temp;
			s+=2;
		}
		if (temp >= num) {
			temp2++;
			temp = 0;
		}
		temp+1;
	}
}
//print the numbers
void printNumber(int* ar) {
	int s = 0;
	while (ar[s] != 0) {
		cout << ar[s] << ", " << ar[s+1];
		cout << endl;
		s+=2;
	}
}
//check if you need to go again
char goAgainCheck() {
	char a;
	cout << "Use program again? (y = yes | n = no): ";
	cin >> a;
	return a;
}
