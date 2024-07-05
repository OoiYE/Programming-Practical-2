#include <iostream>
using namespace std;

int main() {

	int num1, num2;
	int add_result, sub_result, mul_result, mod_result;
	double div_result;

	cout << "Please enter number 1: " << endl;
	cin >> num1;
	cout << "Please enter number 2: " << endl;
	cin >> num2;

	add_result = num1 + num2;
	sub_result = num1 - num2;
	mul_result = num1 * num2;
	div_result = static_cast<double>(num1) / num2;
	mod_result = num1 % num2;

	cout << "Addition is " << add_result << endl;
	cout << "Substraction is " << sub_result << endl;
	cout << "Multiplication is " << mul_result << endl;
	cout << "Division is " << div_result << endl;
	cout << "Modulus is " << mod_result << endl;

	return 0;
}
