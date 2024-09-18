// Mathematical Expressions and Interactive IO Programming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    float Principal;
    float Rate;
    float T;
    float SavingsAmount;
    cout << "What is the principal amount of money in your savings account?";
    cin >> Principal;
    cout << "What is the interest rate your account has?";
    cin >> Rate;
    cout << "How many times does your interest compound yearly?";
    cin >> T;
    SavingsAmount = 1 + (Rate / T);
    SavingsAmount = pow(SavingsAmount, T);
    SavingsAmount = Principal * SavingsAmount;
    cout << SavingsAmount << "\n";
}

