// Copyright (c) 2023 Lily Carroll All rights reserved.
//
// Created by: Lily Carroll
// Created on: Oct/13/2023
// This program asks the user for a number
// and tells them if their number is
// positive, negative or 0.
#include <iostream>

int main() {
    // Declaring variable for the user's number.
    int userNumber;

    // Getting user input.
    std::cout << "Enter an integer: ";
    std::cin >> userNumber;

    // Using If condition for positive integers.
    // Using Else If condition for negative integers.
    // Using Else condition for the integer 0.
    if (userNumber > 0) {
        std::cout << userNumber << " is positive.";
    } else if (userNumber < 0) {
        std::cout << userNumber <<" is negative.";
    } else {
        std::cout << "Your number is 0.";
    }
}
