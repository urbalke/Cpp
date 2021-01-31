/*
 * klasy.h
 *
 *  Created on: Jan 16, 2021
 *      Author: patryk
 */

#ifndef KLASY_H_
#define KLASY_H_
#include <iostream>
using namespace std;

class Bohater {
public:
	int hp, sila, moc, lv;

	Bohater(int hp, int sila, int moc, int lv) {
		this->hp = hp;
		this->sila = sila;
		this->moc = moc;
		this->lv = lv;

	}

	friend ostream& operator<<(ostream &os, const Bohater &staty) {

		os << "\nHP:  " << staty.hp << "\nLV:  " << staty.lv << "\nMoc:  "
				<< staty.moc << "\nSiła: " << staty.sila;
		return os;

	}

};

class InterfejsBohatera { // @suppress("Class has a virtual method and non-virtual destructor")
public:
	virtual void atak()=0;
	virtual void obrona()=0;

};

class Rycerz: public Bohater, public InterfejsBohatera { // @suppress("Class has a virtual method and non-virtual destructor")

public:

	Rycerz(int hp, int sila, int moc, int lv) :
			Bohater(hp, sila, moc, lv) {
	}

	virtual void atak();
	virtual void obrona();
};

class Mag: public Bohater, public InterfejsBohatera { // @suppress("Class has a virtual method and non-virtual destructor")

public:

	Mag(int hp, int sila, int moc, int lv) :
			Bohater(hp, sila, moc, lv) {
	}

	virtual void atak();
	virtual void obrona();

};
class Lucznik: public Bohater, public InterfejsBohatera { // @suppress("Class has a virtual method and non-virtual destructor")

public:

	Lucznik(int hp, int sila, int moc, int lv) :
			Bohater(hp, sila, moc, lv) {
	}

	virtual void atak();
	virtual void obrona();

};
class Druid: public Bohater, public InterfejsBohatera { // @suppress("Class has a virtual method and non-virtual destructor")

public:

	Druid(int hp, int sila, int moc, int lv) :
			Bohater(hp, sila, moc, lv) {
	}

	virtual void atak();
	virtual void obrona();

};

#endif /* KLASY_H_ */
