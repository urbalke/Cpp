#include <iostream>
#include "klasy.h"
#include "dwukierunkowa.h"

using namespace std;

template<typename T, typename U>
class Lista {
public:
	void insert_front(T **head, U *new_data) {
		//allocate memory for New node
		T *newNode = new T;

		//assign data to new node
		newNode->wsk = new_data;

		//new node is head and previous is null, since we are adding at the front
		newNode->next = (*head);
		newNode->prev = NULL;

		//previous of head is new node
		if ((*head) != NULL)
			(*head)->prev = newNode;

		//head points to new node
		(*head) = newNode;
	}

	void wypisywanie_listy(T **last) {

		T *pierwszy_next = new T;

		if ((*last) == NULL) {
			cout << "Lista jest pusta" << endl;
			return;
		}

		pierwszy_next = (*last)->next;

		do {
			pierwszy_next->wsk->atak();
			cout << "==>\n\n"; // to moge albo returna dac albo cos tutaj przyglupczyc
			pierwszy_next->wsk->obrona();
			cout << "==>\n\n";  // dobra git

			pierwszy_next = pierwszy_next->next;

		} while (pierwszy_next != (*last)->next);

		if (pierwszy_next == (*last)->next)
			cout << pierwszy_next->wsk;
		cout << "\n";

	}

};

