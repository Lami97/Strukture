#include<iostream>
using namespace std;
struct unemployed {
	char name[15];
	char surname[20];
	char gender[20];
	int BirthYear;
	float ServiceYears;
	void input(unemployed &);
	void output(unemployed);
	int BiggestNumber(unemployed[],int);
	void Female(unemployed[],int);
};
void unemployed::input (unemployed & o) {
	cout << "Enter your name: ";
	cin.getline(name, 15);
	cout << "Enter your surname: ";
	cin.getline(surname, 20);
	cout << "Enter your gender: ";
	cin.getline(gender, 20);
	cout << "Enter your birth year: ";
	cin >> BirthYear;
	cout << "Enter your years of service: ";
	cin >> ServiceYears;

	cin.ignore();
}
void unemployed::output(unemployed) {
	cout << "Name: " << name << endl;
	cout << "Surname: " << surname << endl;
	cout << "Gender: " << gender << endl;
	cout << "Year of birth: " << BirthYear << endl;
	cout << "Zears of service: " << ServiceYears << endl;
}
int unemployed::BiggestNumber(unemployed array[], int vel) {
	int enteredNumber;
	cout << "Enter a number: ";
	cin >> enteredNumber;
	int number=0;
	for (int i = 0; i < vel; i++) {
		if (array[i].ServiceYears > enteredNumber)
			number++;
	}
	return number;
}

int main() {
	unemployed array[5];
	for (int i = 0; i < 5; i++) {
		array[i].input(array[i]);
	}
	for (int i = 0; i < 5; i++) {
		array[i].output(array[i]);
	}
	cout << "Number of unemployed stuff members with bigger amount of years of service than the entered number is: " << array[5].BiggestNumber(array, 5);
	
	system("pause>0");
	return 0;
}