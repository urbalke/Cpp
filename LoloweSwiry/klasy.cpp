#include "klasy.h"
#include "dwukierunkowa.h"
#include "dwukierunkowa.cpp"
#include <iostream>

using namespace std;

void Rycerz::atak() {
	cout << "atak Rycerzem " << endl;
}
void Mag::atak() {
	cout << "atak Magiem " << endl;
}
void Lucznik::atak() {
	cout << "atak Lucznikiem " << endl;
}
void Druid::atak() {
	cout << "atak Druidem" << endl;
}
void Rycerz::obrona() {
	cout << "Obrona Rycerzem " << endl;
}
void Mag::obrona() {
	cout << "Obrona Magiem " << endl;
}
void Lucznik::obrona() {
	cout << "Obrona Lucznikiem " << endl;
}
void Druid::obrona() {
	cout << "Obrona Druidem" << endl;
}

class A {
public:
	virtual void foo() {
		cout << "Wywołane z A" << endl;
	}
};

class B: public A {
public:
	void foo() {
		cout << "Wywołane z B" << endl;
	}
};

int main() {

//	A a;
//	B b;
//	A *pa = new A;
//	A *pab = new B;
//	A &raa = a;
//	A &rab = *pab; Grubo conie? :D
//
//	a.foo();
//	b.foo();
//
//	pab->foo();
//
//	Bohater Roland(1, 23, 2, 4);
//
//	Roland.atak();

	Rycerz a(2, 3, 6, 7);
	Lista<Node, InterfejsBohatera> lista;

	InterfejsBohatera *Jerzy = &a;
	Mag *Roland = new Mag(2, 3, 6, 7);
	InterfejsBohatera *Magius = new Lucznik(2, 3, 6, 7);
	InterfejsBohatera *Wacek = new Druid(2, 3, 6, 7);

	struct Node *last = NULL;

	lista.insert_front(&last, Roland);
	lista.insert_front(&last, Jerzy);
	lista.insert_front(&last, Magius);
	lista.insert_front(&last, Wacek);

//	Roland->atak();
//	lista.wypisywanie_listy(&last);

	a.atak();
	Roland->atak();
	cout << a;

	return 0;

}
