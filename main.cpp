/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Nikolai Coletta
 */

#include "std_lib_facilities.h"

double findArea(const double PI, double diameter);

int main() {
    double diameter;
    double const PI = 3.1415926536;

    cout << "Type the number for the diameter of the circle." << endl;
    cin >> diameter;

    cout << "The area of the circle with diameter " << diameter << " is: " << findArea(PI, diameter);

    return 0;
}

//We can call PI a const to reiterate for the program that this variable will not change.
//This may be desired to let the program have performance increases, by knowing what data will need access or not.
//This is not commonly used though, as most constants are global variables (as they wouldn't change outside the function, usually).
double findArea(const double PI, double diameter) {
    diameter /= 2;
    return PI * diameter * diameter;
}