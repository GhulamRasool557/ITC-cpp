/*
=========================================================
                 SALARY CALCULATOR (C++)
=========================================================

PROJECT DESCRIPTION:
This program calculates the net salary of an
employee from basic pay, allowances and tax.

FEATURES:
- Basic salary input
- House rent and medical allowance
- Overtime pay
- Tax slab deduction and salary slip

CONCEPTS USED:
- Conditional statements (if-else ladder)
- Basic arithmetic operations
- Float values
- Formatted output

AUTHOR:
Ghulam Rasool

FOR QUERIES:
Gmail: epiccoding557@gmail.com

=========================================================
*/

#include <iostream>
using namespace std;

int main()
{
    // ----------- SYSTEM DATA -----------
    int empId;
    float basic;
    float houseRent;
    float medical;
    int overtimeHours;
    float overtimePay;
    float gross;
    float tax;
    float net;

    // ----------- WELCOME -----------
    cout << "===================================" << endl;
    cout << "         SALARY CALCULATOR         " << endl;
    cout << "===================================" << endl;

    // ----------- INPUT -----------
    cout << "Enter Employee ID: ";
    cin >> empId;

    cout << "Enter basic salary: ";
    cin >> basic;

    while (basic <= 0)
    {
        cout << "Invalid! Enter basic salary again: ";
        cin >> basic;
    }

    cout << "Enter overtime hours: ";
    cin >> overtimeHours;

    if (overtimeHours < 0)
        overtimeHours = 0;

    // ----------- CALCULATION -----------
    houseRent = basic * 0.20;      // 20% of basic
    medical = basic * 0.10;        // 10% of basic
    overtimePay = overtimeHours * 500;

    gross = basic + houseRent + medical + overtimePay;

    if (gross <= 50000)
        tax = 0;
    else if (gross <= 100000)
        tax = gross * 0.05;
    else
        tax = gross * 0.10;

    net = gross - tax;

    // ----------- SALARY SLIP -----------
    cout << endl;
    cout << "========== SALARY SLIP ==========" << endl;
    cout << "Employee ID: " << empId << endl;
    cout << "Basic Salary: " << basic << endl;
    cout << "House Rent (20%): " << houseRent << endl;
    cout << "Medical (10%): " << medical << endl;
    cout << "Overtime (" << overtimeHours << " hrs): " << overtimePay << endl;
    cout << "---------------------------------" << endl;
    cout << "Gross Salary: " << gross << endl;
    cout << "Tax: " << tax << endl;
    cout << "Net Salary: " << net << endl;

    return 0;
}
