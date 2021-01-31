//============================================================================
// Name        : Kalkulator.cpp
// Author      : Patryk
// Version     :
// Copyright   : Your copyright noticujemy przyjaze
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class CalculatorObject {

private:
	unsigned long int value;
	int dummy_variable;

public:

	CalculatorObject(unsigned long int x, int y) :
			value(x), dummy_variable(y) {

	}
	CalculatorObject(unsigned long int x) :
			CalculatorObject(x, 5) {

	}

	CalculatorObject operator +(const CalculatorObject &rhs) {

		return CalculatorObject(this->value + rhs.value);
	}

	CalculatorObject operator -(const CalculatorObject &rhs) {

		return CalculatorObject(this->value - rhs.value);
	}

	CalculatorObject operator *(const CalculatorObject &rhs) {

		return CalculatorObject(this->value * rhs.value);
	}

	CalculatorObject operator /(const CalculatorObject &rhs) {

		return CalculatorObject(this->value / rhs.value);
	}

	CalculatorObject operator !() {

		return CalculatorObject(-this->value);
	}

};

int main() {

	CalculatorObject a(2);
	CalculatorObject b(3);

	a = a + b;

	return 0;
}

//void menu() {
//
//	float a, b;
//	int akcja;
//
//	while (akcja != 9) {
//		cout << "-------Co chcesz zrobic?-------\n"
//				<< "1 Dodac do siebie dwie liczby\n"
//				<< "2 Odjac od siebie dwie liczby\n"
//				<< "3 Pomnozyc przez siebie dwie liczby\n"
//				<< "4 Podzielic a przez b\n\n\n" << "9 Zakoncz\n\n";
//
//		cin >> akcja;
//
//		if (akcja != 9) {
//			cout << "Podaj A" << endl;
//			cin >> a;
//
//			cout << "Podaj B" << endl;
//			cin >> b;
//
//			switch (akcja) {
//			case 1:
//				cout << "Wynik to : \n" << suma(a, b) << endl;
//				break;
//			case 2:
//				cout << "Wynik to : \n" << roznica(a, b) << endl;
//				break;
//			case 3:
//				cout << "Wynik to : \n" << iloczyn(a, b) << endl;
//				break;
//			case 4:
//				cout << "Wynik to : \n" << iloraz(a, b) << endl;
//				break;
//			}
//		}
//	}
//}
//
