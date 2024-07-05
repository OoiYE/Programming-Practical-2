#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	double c, f;
	cout << "Please enter temperature value in Celcius: ";
	cin >> c;

	f = (c * 9) / 5 + 32;

	cout << "Celsius Fahrenheit" << endl;
	cout << fixed << setprecision(2); // fix to 2 decimal place
	cout << setw(7) << c << " ";     // 7 space for celcius
	cout << setw(10) << f << endl;  // 10 space for farenheit
	return 0;
}