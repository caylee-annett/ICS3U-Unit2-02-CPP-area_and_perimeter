// Copyright (c) 2021 Caylee Annett All rights reserved
//
// Created by Caylee Annett
// Created on April 2021
// This program calculates the area and perimeter of a rectangle using
//    dimensions that the user entered

#include <iostream>

int main() {
    // This function calculates the area and perimeter
    int lengthOfRectangle;
    int widthOfRectangle;
    int area;
    int perimeter;

    // Input
    std::cout << "Enter the length of the rectangle (mm): ";
    std::cin >> lengthOfRectangle;
    std::cout << "Enter the width of the rectangle (mm): ";
    std::cin >> widthOfRectangle;

    // Process
    area = lengthOfRectangle*widthOfRectangle;
    perimeter = 2*(lengthOfRectangle+widthOfRectangle);

    // Output
    std::cout << "" << std::endl;
    std::cout << "The area is: " << area << " mm²." << std::endl;
    std::cout << "The perimeter is: " << perimeter << " mm." << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
