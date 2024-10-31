#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void initializeArray(int array[], int size);

const int SIZE = 10;
int randomArray[SIZE];

int main() {
	initializeArray(randomArray, SIZE);

	cout << "The random integers: ";
	for (int i = 0; i < SIZE; i++) {
		cout << randomArray[i] << "  ";
	}

	cout << endl << "Even indices:        ";
	for (int i = 0; i < SIZE; i += 2) {
		cout << randomArray[i] << "  ";
	}

	cout << endl << "Even values:         ";
	for (int i = 0; i < SIZE; i++) {
		if (randomArray[i] % 2 == 0) {
			cout << randomArray[i] << "  ";
		}
	}



	return 0;
}

void initializeArray(int array[], int size) {
	srand(time(0));
	for (int i = 0; i < SIZE; i++) {
		array[i] = rand() % 9000 + 1000;
	}
}