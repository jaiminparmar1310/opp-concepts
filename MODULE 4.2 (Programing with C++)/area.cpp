#include <iostream>
#include <cmath>

const double PI = 3.14;

double calculateArea(double length, double breadth) 
{
    return length * breadth;
}

double calculateArea(double base, double height, bool isTriangle = true) 
{
    return isTriangle ? 0.5 * base * height : 0;
}

double calculateArea(double radius, bool isCircle = true) 
{
    return isCircle ? PI * radius * radius : 0;
}

int main() 
{
    double length, breadth, base, height, radius;
    
    std::cout << "Enter the length and breadth of the rectangle: ";
    std::cin >> length >> breadth;
    std::cout << "Rectangle Area: " << calculateArea(length, breadth) << std::endl;

    std::cout << "Enter the base and height of the triangle: ";
    std::cin >> base >> height;
    std::cout << "Triangle Area: " << calculateArea(base, height) << std::endl;

    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;
    std::cout << "Circle Area: " << calculateArea(radius) << std::endl;

    return 0;
}
