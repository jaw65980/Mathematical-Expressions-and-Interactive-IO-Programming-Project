// Mathematical Expressions and Interactive IO Programming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float Principal;
    float Rate;
    float T;
    cout << "What is the principal amount of money in your savings account? ";
    cin >> Principal;
    cout << "What is the interest rate your account has? ";
    cin >> Rate;
    cout << "How many times does your interest compound yearly? ";
    cin >> T;
    float PreSavingsAmount = 1 + (Rate / T);
    PreSavingsAmount = pow(PreSavingsAmount, T);
    float SavingsAmount = Principal * PreSavingsAmount;
    float Interest = SavingsAmount - Principal;
    cout << "\nInterest Rate:" << setw(10)  << Rate << endl;
    cout << "Times Compounded:" << setw(10) << T << endl;
    cout << "Principal:" << setw(10) << setprecision(2) << fixed << "$" << Principal << endl;
    cout << "Interest:" << setw(10) << "$" << Interest << endl;
    cout << "Amount in Savings:" << setw(10) << "$" << SavingsAmount << endl;
}

