#include<iostream>
using namespace std;
struct complexNumber {
	int real, img;
	
	void input();
	void output();
	void sum(complexNumber,complexNumber);
	void divide(complexNumber, complexNumber);
};
void complexNumber::input() {
	int x, y;
	cout << "Enter real number: ";
	cin >> x;
	cout << "Enter imaginary number: ";
	cin >> y;
	real = x;
	img = y;
}
void complexNumber::output() {
	cout << "Complex number is: " << real << "+ i" << img << endl;
}
void complexNumber::sum(complexNumber c1,complexNumber c2) {
	complexNumber c3;
	c3.real = c1.real + c2.real;
	c3.img = c1.img + c2.img;
	cout << "Sum of these complex numbers is: " << c3.real << "+ i" << c3.img;
}
void complexNumber::divide(complexNumber x, complexNumber y) {
	complexNumber c3;
	c3.real = x.real - y.real;
	c3.img = x.img - y.img;
	cout << "Division of these complex numbers is: " << c3.real << "- (" << c3.img<<"i)";
}
int main() {
	complexNumber x,y,z;
	x.input();
	y.input();
	x.output();
	y.output();
	z.sum(x, y);
	z.divide(x, y);
	

}
