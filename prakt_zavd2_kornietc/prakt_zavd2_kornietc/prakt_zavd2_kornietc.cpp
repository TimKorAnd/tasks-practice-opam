#include <iostream>
#include <time.h>
#include <cmath>

using namespace std;

int main() 
{
	int numbers[10];
	int someNumber = 0;

	srand(time(NULL));

	for (int i = 0; i < 10; i++)
	{
		numbers[i] = rand() % 21; // 0 ... 20
	}

	for (int i = 0; i < 10; i++)
	{
		cout << numbers[i] << "  ";
	}

	cout << endl << "enter some number: ";
	cin >> someNumber;

	for (int i = 0; i < 10; i++) 
	{
		if ( numbers[i] == someNumber * someNumber){
			cout << numbers[i] << "  ";
		}
		
	}




}