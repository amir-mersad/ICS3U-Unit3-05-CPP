// Copyright (c) 2019 Amirmahdi Mersad All rights reserved
//
// Created by Amir Mersad
// Created on September 2019
// This program gives the month of each number

#include <iostream>

int main() {
    // This function gives the month of each number
    std::string monthString;
    int month;
    // Input
    std::cout << "Please enter the number of month(1-12): " << std::endl;
    std::cin >> monthString;

    month = atoi(monthString.c_str());

    // Process & Output
    if (month == 1) {
        std::cout << "January" << std::endl;
    } else if (month == 2) {
        std::cout << "February" << std::endl;
    } else if (month == 3) {
        std::cout << "March" << std::endl;
    } else if (month == 4) {
        std::cout << "May" << std::endl;
    } else if (month == 5) {
        std::cout << "April" << std::endl;
    } else if (month == 6) {
        std::cout << "June" << std::endl;
    } else if (month == 7) {
        std::cout << "July" << std::endl;
    } else if (month == 8) {
        std::cout << "August" << std::endl;
    } else if (month == 9) {
        std::cout << "September" << std::endl;
    } else if (month == 10) {
        std::cout << "October" << std::endl;
    } else if (month == 11) {
        std::cout << "November" << std::endl;
    } else if (month == 12) {
        std::cout << "December" << std::endl;
    } else {
        std::cout << "Wrong input!!!" << std::endl;
    }
}
