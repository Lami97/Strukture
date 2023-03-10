#include<iostream>
using namespace std;
struct student{
	int RB;
	char name[15];
	char surname[15];
	int grades[5];
	void thirdInput();
	void thirdOutput();
	float secondAverage();
};
void input(student& o) {
	cout << "Enter ordinal number: ";
	cin >> o.RB;
	cin.ignore();
	cout << "Enter name: ";
	cin.getline(o.name, 15);
	cout << "Enter surname: ";
	cin.getline(o.surname, 15);
	cout << "Enter grades: ";
	for (int i = 0; i < 5; i++) {
		cin >> o.grades[i];
	}
}
void output(student o) {
	cout << "Ordinal number: " << o.RB << endl;
	cout << "Students name: " << o.name << endl;
	cout << "Students surname: " << o.surname << endl;
	cout << "Students grades: ";
	for (int i = 0; i < 5; i++)
	{
		cout << o.grades[i];
		cout << endl;
	}
}
void Arrayinput(student array[], int vel) {
	for (int i = 0; i < vel; i++) {
		cout << "Enter ordinal number: ";
		cin >> array[i].RB;
		cin.ignore();
		cout << "Enter students name: ";
		cin.getline(array[i].name, 15);
		cout << endl;
		cout << "Enter students surname: ";
		cin.getline(array[i].surname,15);
		cout << endl;
		cout << "Enter students grades: ";
		for (int j = 0; j < 5; j++)
		{
			cin >> array[i].grades[j];
			if (array[i].grades[j] < 1 || array[i].grades[j]>5)
				j--;
		}
		

	}
}
void Arrayoutput(student array[], int vel) {
	for (int i = 0; i < vel; i++) {
		cout << array[i].RB<<endl;
		cout << array[i].name<<endl;
		cout << array[i].surname<<endl;
		for (int j = 0; j < 5; j++) {
			cout << array[i].grades[j];
			if(array[i].grades[j]<1 || array[i].grades[j]>5 )
			j--;
		}
	}
}
float Average(student std) {
	int sum = 0;
	
	for (int i = 0; i < 5; i++)
	{
		sum += std.grades[i];
		
	}
	 return sum=sum/ 5.0;

}
void student::thirdInput() {
	cout << "Enter ordinal number: ";
	cin >> RB;
	cin.ignore();
	cout << "Enter students name: ";
	cin.getline(name, 15);
	cout << "Enter students surname: ";
	cin.getline(surname, 15);
	cout << "Enter students grades: ";
	for (int i = 0; i < 5; i++) {
		cin >> grades[i];
		if (grades[i] < 1 || grades[i]>5)
			i--;
	}


}
void student::thirdOutput() {
	cout <<"Student ordinal number is: " <<RB;
	cout << "Students name is: " << name;
	cout << "Students surname is: " << surname;
	cout << "Students grades are: ";
	for (int i = 0; i < 5; i++)
	{
		cout << grades[i];
	}
}
float student::secondAverage() {
	int sum = 0;
	cout << "Average grade is: ";
	for (int i = 0; i < 5; i++)
		sum += grades[i];
	return sum / 5.0;
}
int main() {
	student obj1, obj2;
	input(obj1);
	output(obj1);
	student array[2];
	Arrayinput(array, 2);
	Arrayoutput(array, 2);
	cout << endl;
	for (int i = 0; i < 2; i++)
	{
		cout<< "Average grade of  student is: " << Average(array[i])<<endl;
	}
	for (int i = 0; i < 2; i++) {
		array[i].thirdInput();
	}
	for (int i = 0; i < 2; i++) {
		array[i].thirdOutput();
	}
	for (int i = 0; i < 2; i++) {
		array[i].secondAverage();
	}
	system("pause > 0");
	return 0;
}