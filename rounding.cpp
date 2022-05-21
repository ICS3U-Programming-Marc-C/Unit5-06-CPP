// Copyright (c) 2022 Coffi All rights reserved.
// Created by: Marc Coffi
// Date: May 2022
// This program rounds decimals

#include <math.h>
#include <iostream>
using std::string;

// Defining the function that rounds up the decimal input
void RoundDecimal(float &decimalNum, int decimalPlace) {
              decimalNum = decimalNum * (pow(10, decimalPlace));
              decimalNum += 0.5;
              // Cast to int
              decimalNum = static_cast<int>(decimalNum);
              decimalNum = decimalNum / (pow(10, decimalPlace));
}

int main() {
       // Declaring variables
       std::string userDecimalNum, userDecimalPlace;
       float userDecimalNumFloat;
       int userDecimalPlaceInt;

       // Getting all the address information from user
       std::cout << "Enter a decimal number: ";
       std::cin >>  userDecimalNum;
       std::cout << "Enter the amount of decimal places: ";
       std::cin >> userDecimalPlace;

       try {
              // Convert the numbers to float and integer
              userDecimalNumFloat = std::stof(userDecimalNum);
              userDecimalPlaceInt = std::stoi(userDecimalPlace);

              // Calling the function
              RoundDecimal(userDecimalNumFloat, userDecimalPlaceInt);

              // Displaying result
              std::cout << "The rounded number is ";
              std::cout << userDecimalNumFloat << "\n";
       } catch (std::invalid_argument) {
              // Exception message
              std::cout << "Invalid input. Please input a proper";
              std::cout << "decimal and a proper number.\n";
       }
}
