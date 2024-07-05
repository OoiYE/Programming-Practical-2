#include <iostream>
using namespace std;

int main() {

	int total_days, weeks, days;
	cout << "Total days: ";
	cin >> total_days;
	
	weeks = total_days / 7;
	days = total_days % 7;

	cout << "This is " << weeks << " weeks and " << days << " days";
	return 0;
}