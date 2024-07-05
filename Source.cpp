#include <iostream>
using namespace std;

#define days_per_weeks 7 

int main() {

	int total_days, weeks, days;
	cout << "Total days: ";
	cin >> total_days;
	
	weeks = total_days / days_per_weeks;
	days = total_days % days_per_weeks;

	cout << "This is " << weeks << " weeks and " << days << " days";
	return 0;
}