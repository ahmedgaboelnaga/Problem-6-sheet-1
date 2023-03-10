#include<iostream>

using namespace std;

int main()
{
	//Problem 6: Write a c++ program that asks the user to input
	//	• The number of gallons of gas in the tank
	//	• The fuel efficiency in miles per gallon
	//	• The price of gas per gallon
	//	Then print the cost per 100 miles and how far the car can go with the gas in the tank.

	float gallon, efficiency, price, milecost, costper100, lengthoftrip;

	cout << "Enter the numbre of gallons in the tank: ";
	cin >> gallon;

	cout << "Enter The number of miles per gallon: ";
	cin >> efficiency;

	cout << "Enter the price of gallon: ";
	cin >> price;

	milecost = price / efficiency;

	costper100 = milecost * 100;

	cout << "The cost per 100 miles: " << costper100 << endl;

	lengthoftrip = gallon * efficiency;

	cout << "You can go: " << lengthoftrip << " miles";
}
