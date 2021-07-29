
#include <cmath>
#include <iostream>
#include <conio.h>

using namespace std;

/*
	Source by GeeksForGeeks
	Modified For Learn by RK
	I.D.E : VS2019
*/

int main() {
	double a, b;
	double hasil;

	a = 74.11;
	b = -4.1;

	hasil = remainder(a, b);

	cout << "Remainder of " << a << "/" << b << " is " << hasil << endl;

	a = 19.10;
	b = 3.6;

	hasil = remainder(a, b);

	cout << "Remainder of " << a << "/" << b << " is " << hasil << endl;

	a = 14.08;
	b = 0;
	hasil = remainder(a, b);
	cout << "Remainder of " << a << "/" << b << " is " << hasil << endl;

	_getch();
	return 0;
}
