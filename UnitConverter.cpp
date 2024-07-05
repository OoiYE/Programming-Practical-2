#include <iostream>
using namespace std;

int main() {
    double inches, feet, yards, meters, centimeters;
    cout << "Please enter the measurement in inches: ";
    cin >> inches;

    feet = inches / 12;
    yards = inches / 36;
    meters = inches / 39.37;
    centimeters = inches * 2.54;

    cout << "Converted value: " << endl;
    cout << feet << " feet" << endl;
    cout << yards << " yards" << endl;
    cout << meters << " meters" << endl;
    cout << centimeters << " centimeters";

    return 0;
}
