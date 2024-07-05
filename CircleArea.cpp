#include <iostream>
using namespace std;

#define PI 3.14159

int main() {

	double r, a;
	cout << "Please enter the radius of the circle: ";
	cin >> r;

	a = PI * r * r;

	cout << "The area of the circle is " << a;

}
