#include <iostream>
#include <time.h>
using namespace std;

int main() {
	string row[11];
	int counter = 0;
	srand(time(NULL));

	for (int i = 0; i < 11; i++) { //заповнення рядка (псевдо)рандомними символами

		row[i] = rand() % 127;

	}

	for (int i = 0; i < 11; i++) { // виведення рядка

		cout << row[i] << " ";

	}
	cout << endl;
	for (int i = 0; i < 10; i++) {

		if (row[i] != row[i + 1]) {

			cout << row[i] << " " << row[i + 1] << " are different " << endl;
			counter++;
			cout << counter << " different symbols" << endl;
		}

	}
	return 0;
}