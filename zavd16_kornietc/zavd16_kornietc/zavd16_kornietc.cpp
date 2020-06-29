#include <iostream>
using namespace std;

struct Student {
	string name;
	string surName;
	string classCode;
	int namesakeAmount;
};



int main() {
	const int AMOUNT_STUDENTS = 5;
	Student students[AMOUNT_STUDENTS] = {};

	//enter 5 students
	cout << "enter 5 students" << endl;
	for (int i = 0; i < AMOUNT_STUDENTS; i++)
	{
		cout << "enter name # " << i + 1 << " (up to 20 symbols): " << endl;
		cin >> students[i].name;
		cout << "enter surname # " << i + 1 << " (up to 20 symbols): " << endl;
		cin >> students[i].surName;
		cout << "enter class (e.g.10B) # " << i + 1 << " (up to 3 symbols): " << endl;
		cin >> students[i].classCode;
		cin.get();
	}
	//перевірка на кількість однофамільців
	for (int i = 0; i < AMOUNT_STUDENTS; i++) {
		for (int j = i + 1; j < AMOUNT_STUDENTS; j++) {
			if (students[i].surName == students[j].surName) {
				students[i].namesakeAmount++;
			}
		}
	}
	//виведення однофамільців
	for (int i = 0; i < AMOUNT_STUDENTS; i++) {
		if (students[i].namesakeAmount != 0) {
			cout << students[i].surName << " " << students[i].namesakeAmount + 1 << endl;
		}
	}

}