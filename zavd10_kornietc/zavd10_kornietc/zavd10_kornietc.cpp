#include <iostream>
#include <time.h>
using namespace std;

void sort(double x[10]) {
	double temp; //змінна для зміни елементів місцями
		//сортування бульбашкою
	for (int i = 0; i < 10 - 1; i++) {
		for (int j = 0; j < 10 - i - 1; j++) {
			if (x[j] > x[j + 1]) {
				//міняємо елементи місцями
				temp = x[j];
				x[j] = x[j + 1];
				x[j + 1] = temp;
			}
		}
	}
}
void showArray(double x[10]) {
	for (int i = 0; i < 10; i++) {
		cout << x[i] << " ";

	}
	
}
// Функция, генерирующая случайное действительное число от min до max
double random(double min, double max)
{
	return (double)(rand()) / RAND_MAX * (max - min) + min;
}
int main() {
	srand(time(NULL));

	double array[10];

	for (int i = 0; i < 10; i++) {
		array[i] = random(-10.0, 10.0);

	}

	showArray(array);

	cout << endl;

	sort(array);

	showArray(array);

}