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

using namespace std;

// A doubly linked list node
struct Node {
	Bohater *wsk;
	struct Node *next;
	struct Node *prev;
};

void insert_front();

#endif /* DWUKIERUNKOWA_H_ */
