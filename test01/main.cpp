#include <iostream>
#define DEFAULT_SIZE 10 // c-notation

using namespace std;

int main() {
	//int array[10];
	const int SIZE = 10;
	int array[SIZE];
	int index = 0;

	for (int index = 0; index < SIZE; index++) {
		array[index] = 0;
	}


	//array[index] = 0;// 0
	//index++;
	//array[index] = 0;//1
	//index++;
	//array[index] = 0;
	//index++;
	//array[index] = 0;
	//index++;
	//array[index] = 0;
	//index++;
	//array[index] = 0;
	//index++;
	//array[index] = 0;
	//index++;
	//array[index] = 0;
	//index++;
	//array[index] = 0;
	//index++;
	//array[index] = 0;//


	/*cout << "[0] - " << array[0] << endl;
	cout << "[1] - " << array[1] << endl;
	cout << "[2] - " << array[2] << endl;
	cout << "[3] - " << array[3] << endl;
	cout << "[4] - " << array[4] << endl;
	cout << "[5] - " << array[5] << endl;
	cout << "[6] - " << array[6] << endl;
	cout << "[7] - " << array[7] << endl;
	cout << "[8] - " << array[8] << endl;
	cout << "[9] - " << array[SIZE-1] << endl;*/

	for (int index = 0; index < SIZE; index++) {
		cout << "[" << index + 1 << "] - " << array[index] << endl;
	}

	return 0;
}