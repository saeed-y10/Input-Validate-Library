// clsInput Validate Library.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "clsInputValidate.h"

using namespace std;

int main()
{
    cout << clsInputValidate::IsNumberBetween<int>(5, 1, 10) << endl;
    cout << clsInputValidate::IsNumberBetween<float>(5.5, 1.3, 10.8) << endl;

    cout << clsInputValidate::IsDateBetween(clsDate(), clsDate(8, 12, 2023), clsDate(31, 12, 2022)) << endl;
    cout << clsInputValidate::IsDateBetween(clsDate(), clsDate(31, 12, 2022), clsDate(8, 12, 2023)) << endl;

    cout << "\nPease Enter a Number: ";
    int x = clsInputValidate::ReadNumber<int>("Invalid Number, Enter Again: ");
    
    cout << "\nx = " << x << endl;

    cout << "\nPease Enter a Number Between 1 and 5: ";
    int y = clsInputValidate::ReadNumberBetween<int> (1, 5, "Number is not Within Range, Enter Again: ");
    
    cout << "\ny = " << y << endl;

    cout << "\nPease Enter a Double Number: ";
    double b = clsInputValidate::ReadNumber<double>("Invalid Number, Enter Again: ");
    
    cout << "\nb = " << b << endl;

    cout << "\nPease Enter a Double Number Between 1 and 5: ";
    double c = clsInputValidate::ReadNumberBetween<double>(1, 5, "Number is not Within Range, Enter Again: ");
    
    cout << "\nc = " << c << endl;

    cout << endl << clsInputValidate::IsValidDate(clsDate(35, 12, 2022)) << endl;

    return 0;
}