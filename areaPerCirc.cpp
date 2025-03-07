// Copyrights (c) 2025 Angel All rights reserved.
// Created by: Angel
// Date: March 03,2025
// This program asks the user for the radius
// of a circle. It then calculates and displays the area and
// the perimeter of the circle.


#include <cmath>  // include cmath for M_PI
#include <iostream>  // include the iostream header forinput and output

int main() {
    // declare the radius variable using double for potential decimal value
    double radius;

    // get the radius and from the user
    std::cout << "Enter the radius (mm): ";
    std::cin >> radius;

    // calculate the area using the formula:π*radius^2
    double area = M_PI * pow(radius, 2);

    // calculate the perimeter(circumference) of circle
    double perimeter = 2 * M_PI * radius;

    // display the area,perimeter
    std::cout << "\n";
    std::cout << "area of the circle with radius"
    << radius << "is:" << area << std::endl;
    std::cout << "perimeter of the circle with radius"
     << radius << "is:" << perimeter << std::endl;
}
