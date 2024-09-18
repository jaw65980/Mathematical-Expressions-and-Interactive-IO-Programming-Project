// Mathematical Expressions and Interactive IO Programming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float CookieCount = 0;
	cout << "Enter the number of cookies you'd like to bake. ";
	cin >> CookieCount;
	float Sugar = CookieCount *(1.5 / 48);
	float Butter = 1 * (CookieCount / 48);
	float Flour = CookieCount * (2.75 / 48);
	cout << "\nTo bake " << CookieCount << " cookies, you will need: \n" << setprecision(2) << Sugar << " cups of sugar \n" << setprecision(2) << Butter << " cups of butter \n" << setprecision(2) << Flour << " cups of flour \n";
}

