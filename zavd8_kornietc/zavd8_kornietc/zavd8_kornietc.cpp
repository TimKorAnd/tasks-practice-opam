#include <iostream>
using namespace std;
int func(int x, int y) { //функція підрахунку площі
	return x * y;
}

int main() {
	int x, y, z = 0, t = 0;
	cout << "enter first side: " << endl;
	cin >> x;
	z = x; 
	cout << "enter second side: " << endl;
	cin >> y;
	t = y;

	cout << func(x, y); //виведення результату

}