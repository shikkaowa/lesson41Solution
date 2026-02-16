#include <iostream>
using namespace std;
int main() {
	const int MARK_COUNT = 3;
	int marks[MARK_COUNT];
	cout << "Input students marks:";
	for (int index = 0; index < MARK_COUNT; index++)
	{
		cin >> marks[index];
	}
	double avg = 0;
	for (int index = 0; index < MARK_COUNT ; index++)
	{
		avg += marks[index];
	}
	
		cout << "Avg result is" << avg / MARK_COUNT << endl;
		return 0;
}