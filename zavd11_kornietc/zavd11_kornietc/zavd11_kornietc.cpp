#include <iostream>
#include <string.h>
using namespace std;

int amount(int num) {

	int counter = 1;
	while (num >= 10) {
		num /= 10;
		counter++;
	}
	return counter;
}


int main() {
	int num;
	
	cout << "enter a number (2^32 or 10 digits): " << endl;
	cin >> num;
	cout << amount(num) << endl;
	
	return 0;
}