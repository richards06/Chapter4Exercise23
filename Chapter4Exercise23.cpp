/*
Program File Name: Chapter4Exercise23
Programmer: Josh Richards
Date: October 27, 2024
Requirements:

Write a program that displays the following menu:
    
   Geometry Calculator
   1. Calculate the Area of a Circle
   2. Calculate the Area of a Rectangle
   3. Calculate the Area of a Triangle
   4. Quit
   Enter your choice (1-4):

If the user enters 1, the program should ask for the radius of the circle then display its area. Use the following formula:

    area = ?r2

Use 3.14159 for ? and the radius of the circle for r. If the user enters 2, the program should ask for the length and width of the 
rectangle, then display the rectangle's area. Use the following formula:

    area = length * width 

If the user enters 4, the program should end.

Input Validation: Display an error message if the user enters a number outside the range of 1 through 4 when selecting an item from 
the menu. Do not accept negative values for the circle's radius, the rectangle's length or width, of the triangle's base or height.


*/

#include <iostream>
using namespace std;

const double PI = 3.14159;

void displayMenu() {
    cout << "Geometry Calculator" << endl;
    cout << "1. Calculate the Area of a Circle" << endl;
    cout << "2. Calculate the Area of a Rectangle" << endl;
    cout << "3. Calculate the Area of a Triangle" << endl;
    cout << "4. Quit" << endl;
    cout << "Enter your choice (1-4): ";
}

void calculateCircleArea() {
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    if (radius > 0) {
        double area = PI * radius * radius;
        cout << "The area of the circle is: " << area << endl;
    }
    else {
        cout << "Invalid input. Radius must be a positive value." << endl;
    }
}

void calculateRectangleArea() {
    double length, width;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    if (length > 0 && width > 0) {
        double area = length * width;
        cout << "The area of the rectangle is: " << area << endl;
    }
    else {
        cout << "Invalid input. Length and width must be positive values." << endl;
    }
}

void calculateTriangleArea() {
    double base, height;
    cout << "Enter the base of the triangle: ";
    cin >> base;
    cout << "Enter the height of the triangle: ";
    cin >> height;

    if (base > 0 && height > 0) {
        double area = 0.5 * base * height;
        cout << "The area of the triangle is: " << area << endl;
    }
    else {
        cout << "Invalid input. Base and height must be positive values." << endl;
    }
}

int main(){
    int choice;

    do {
        displayMenu();
        cin >> choice;

        if (choice < 1 || choice > 4) {
            cout << "Invalid choice. Please select a number from 1 to 4." << endl;
        }
        else {
            switch (choice) {
            case 1:
                calculateCircleArea();
                break;
            case 2:
                calculateRectangleArea();
                break;
            case 3:
                calculateTriangleArea();
                break;
            case 4:
                cout << "Exiting the program." << endl;
                break;
            }
        }

        cout << endl;

    } while (choice != 4);

    return 0;

}

