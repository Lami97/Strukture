#include<iostream>
using namespace std;

struct student {
	int RB;
	char name[15];
	char surname[15];
	int justifiedHours;
	int unjustifiedHours;
	void input();
	void output();
	int sum(int, int);
};
void student::input() {
	cout << "Enter ordinal number: ";
	cin >> RB;
	cin.ignore();
	cout << "Enter students name: ";
	cin.getline(name, 15);
	cout << "Enter students surname: ";
	cin.getline(surname, 15);
	cout << "Enter justified hours: ";
	cin >> justifiedHours;
	cout << "Enter unjustified hours: ";
	cin >> unjustifiedHours;
}
void student::output() {
	cout << "Ordinal number is: " << RB << endl;
	cout << "Students name is: " << name << endl;
	cout << "Students surname is: " << surname << endl;
	cout << "Number of justified hours is: " << justifiedHours << endl;
	cout << "Number of unjustified hours is: " << unjustifiedHours << endl;
}
int student::sum(int x, int y) {
	int sum = 0;
	x = justifiedHours;
	y = unjustifiedHours;
	sum += x + y;
	return sum;
}
int LowestUnjustified(student array[], int vel) {
	int najmanji = INT_MAX;
	int niz[3];
	int position = 0;
	for (int i = 0; i < vel; i++) {
		niz[i] = array[i].unjustifiedHours;
	}
	for (int i = 0; i < vel; i++) {
		if (niz[i] > najmanji) {
		najmanji = niz[i];
		position = i;
	}
	}
	return niz[position];
}
int highestJustified(student array[], int vel) {
	int najveci = INT_MIN;
	int niz[3];
	int position = 0;
	for (int i = 0; i < vel; i++) {
		niz[i] = array[i].justifiedHours;
	}
	for (int i = 0; i < vel; i++) {
		if (najveci < niz[i])
			najveci = niz[i];
		position = i;
	}
	return niz[position];
}
int main() {
	student array[3];
	for (int i = 0; i < 3; i++) {
		array[i].input();
	}
	for (int i = 0; i < 3; i++) {
		array[i].output();
	}
	for (int i = 0; i < 3; i++) {
		cout << "Total number of justified and unjustified hurs for  " << array[i].RB << ". student is: " << array[i].sum(array[i].justifiedHours, array[i].unjustifiedHours) <<endl;
	}
	cout << "Student with the lowest amount of unjustified hours is student with: " << LowestUnjustified(array, 3) << " unjustified hours";
	cout << "Student with the highest amount of justified hours is student with: " << highestJustified(array, 3) << " justifid hours.";
	system("pause>0");
	return 0;
}
