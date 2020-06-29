#include <iostream>
#include <time.h>
using namespace std;

int main() {
	int numberRow[10];
	int amt = 0;

	srand(time(NULL));

	for (int i = 0; i < 10; i++)
	{
		numberRow[i] = rand() % 20;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << numberRow[i] << " ";
	}
	for (int i = 0; i < 10; i++)
	{
		if (numberRow[i] < numberRow[i + 1] > numberRow[i + 2]) {
			amt++;
		}
	}
	cout << endl << amt << " tooths";
}
