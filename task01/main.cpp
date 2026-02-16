#include <iostream>
#define DEFAULT_SIZE 20
using namespace std;
int main() {
	int marks[DEFAULT_SIZE];

	int length;

	do {
		cout << "input the number of marks (from 1 to 20): ";
		cin >> length;
	} while (length <= 0 && length < DEFAULT_SIZE);

	cout << "Input students marks:";
	for (int index = 0; index < length; index++)
	{
		cin >> marks[index];
	}
	double avg = 0;
	for (int index = 0; index < length; index++)
	{
		avg += marks[index];
	}
	
		cout << "Avg result is: " << avg / length << endl;
		return 0;
}