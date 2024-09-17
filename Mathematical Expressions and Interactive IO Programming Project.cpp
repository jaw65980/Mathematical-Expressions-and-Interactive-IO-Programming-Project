// Mathematical Expressions and Interactive IO Programming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int CookieCount = 0;
	cout << "Enter the number of cookies you'd like to bake. ";
	cin >> CookieCount;
	float CookieCountSol = CookieCount;
	float Sugar = CookieCountSol *(1.5 / 48);
	float Butter = 1 * (CookieCountSol / 48);
	float Flour = CookieCountSol * (2.75 / 48);
	cout << "\nTo bake " << CookieCount << " cookies, you will need: \n" << Sugar << " cups of sugar \n" << Butter << " cups of butter \n" << Flour << " cups of flour \n";
}

