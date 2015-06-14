#include <iostream>
#include <string> // nodig voor strings
#include <cmath> // voor de sqrt
using namespace std;

int main(){
	// ints
	int a = 2;
	int b = 3;

	cout << "a:\t" << a << endl;
	cout << "b:\t" << b << endl;

	cout << "a+b:\t" << a+b << endl;
	cout << "a-b:\t" << a-b << endl;
	cout << "a*b:\t" << a*b << endl;

	// en integer division, met afronding naar beneden
	cout << "a/b:\t" << a/b << endl;

	// verhoog a met 1
	a = a + 1;
	cout << "a:\t" << a << endl;

	// en nog een keer
	a += 1;
	cout << "a:\t" << a << endl;

	// en nog een keer
	a++;
	cout << "a:\t" << a << endl;


	// of verlaag b met 2
	b = b - 2;
	cout << "b:\t" << b << endl;
	
	// en nog een keer
	b -= 2;
	cout << "b:\t" << b << endl;

	// Dit werkt ook voor +-*/


	// doubles
	double c = 2.5;
	double d = 4.0;

	cout << "c:\t" << c << endl;
	cout << "d:\t" << d << endl;

	cout << "c+d:\t" << c+d << endl;
	cout << "c-d:\t" << c-d << endl;
	cout << "c*d:\t" << c*d << endl;
	cout << "c/d:\t" << c/d << endl;

	cout << "sqrt(d):\t" << sqrt(d) << endl;
	cout << "c^d:\t" << pow(c,d) << endl;

	// strings
	string s = "dit is string s";
	string r = "dit is string r";

	cout << "s:\t" << s << endl;
	cout << "r:\t" << r << endl;

	cout << "s+r:\t" << s+r << endl;

	// ook hier kunnen we s+=r gebruiken
	s += r;
	cout << "s:\t" << s << endl;

	
	// booleans
	bool t = true;
	bool f = false;

	// bool worden geprint als 1 of 0!
	cout << "t:\t" << t << endl;
	cout << "f:\t" << f << endl;

	cout << "niet t:\t" << !t << endl;
	cout << "niet f:\t" << !f << endl;
	
	cout << "t en f:\t" << (t&&f) << endl;
	cout << "t of f:\t" << (t||f) << endl;

	// en hier kunnen t &&= f en t ||= f;

	// vergelijkingen
	cout << "2 = 2:\t" << (2 == 2) << endl;
	cout << "1 = 2:\t" << (1 == 2) << endl;
	cout << "1 != 2:\t" << (1 != 2) << endl;

}
