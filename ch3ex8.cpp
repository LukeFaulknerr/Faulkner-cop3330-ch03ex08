/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Luke Faulkner
 */

#include <iostream>
using namespace std;

int main()
{
    // Variables
    int readNumber = 0;

    // Prompt 
    cout << "Please enter the number you wish to evaluate: ";
    cin >> readNumber;

    // Evaluate Data
    if (readNumber % 2 == 0){
        cout << readNumber << " is an even number.";
    }
    else {
        cout << readNumber << " is an odd number.";
    }

    // Return 
    return 0;
}