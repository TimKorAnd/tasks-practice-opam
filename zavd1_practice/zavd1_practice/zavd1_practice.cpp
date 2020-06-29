#include <iostream>
#include <time.h>
/*there is few comment present */
using namespace std;

int main()
{
	int numbers[10];

	srand(time(NULL));

	for (int i = 0; i < 10; i++) {
		numbers[i] = rand() % 41 - 20; // -20 ... 20
	}

	for (int i = 0; i < 10; i++) {
		cout << numbers[i] << " ";
	}

	if (numbers[0] > 0) {
		cout << "fisrt number is positive" << endl;
	}

	if (numbers[0] < 0) {
		cout << "fisrt number is negative" << endl;
	}

	if (numbers[0] == 0) {
		cout << "fisrt number is zero" << endl;
	}
}