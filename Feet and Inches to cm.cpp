#include <iostream>
using namespace std;

int main() {
    int feet, inches;
    double totalInches, centimeters;

    // Input height in feet and inches
    cout << "Enter your height:" << endl;
    cout << "Feet: ";
    cin >> feet;
    cout << "Inches: ";
    cin >> inches;

    // Convert feet and inches to total inches
    totalInches = feet * 12 + inches;

    // Convert total inches to centimeters
    centimeters = totalInches * 2.54; // 1 inch = 2.54 centimeters

    // Display the height in centimeters
    cout << "Your height is " << centimeters << " centimeters." << endl;

    return 0;
}
