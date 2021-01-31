/*
 * dwukierunkowa.h
 *
 *  Created on: Jan 16, 2021
 *      Author: patryk
 */

#ifndef DWUKIERUNKOWA_H_
#define DWUKIERUNKOWA_H_

#include <iostream>
#include "dwukierunkowa.h"
#include "klasy.h"

using namespace std;

// A doubly linked list node
struct Node {
	InterfejsBohatera *wsk;
	struct Node *next;
	struct Node *prev;
};

#endif /* DWUKIERUNKOWA_H_ */
