//============================================================================
// Name        : DrzewoBinarne.cpp
// Author      : Patryk
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct Drzewo {
	int level;
	int wartosc;
	struct Drzewo *lewa, *prawa;
};

void wstawWPusteMiejsce(struct Drzewo **head, int nowaWartosc) {

	if ((*head) != NULL) {

		return;
	}

	struct Drzewo *temp = new Drzewo;

	temp->wartosc = nowaWartosc;
	temp->level = 0;

	(*head) = temp;

}

void wstawNastepne(struct Drzewo **head, int nowaWartosc) {
	if ((*head) == NULL) {
		wstawWPusteMiejsce(head, nowaWartosc);
		return;
	}

	struct Drzewo *temp = new Drzewo;
	struct Drzewo *kopia = new Drzewo;
	kopia = (*head);
	temp->wartosc = nowaWartosc;

	while (true) {
		if (nowaWartosc > kopia->wartosc) {

			if (kopia->prawa == NULL) {
				temp->level = kopia->level + 1;
				kopia->prawa = temp;
				break;
			}
			kopia = kopia->prawa;

		} else {
			if (kopia->lewa == NULL) {
				temp->level = kopia->level + 1;
				kopia->lewa = temp;
				break;
			}
			kopia = kopia->lewa;

		}
	}

}
void free_tree(Drzewo *node) {
	if (node != NULL) {
		free_tree(node->prawa);

		free_tree(node->lewa);
		free(node);
	}
}

void czytanie1(Drzewo *node) {
	if (node) {
		cout << node->wartosc << endl;
		czytanie1(node->lewa);
		czytanie1(node->prawa);
	}
}
void czytanie2(Drzewo *node) {
	if (node) {
		czytanie2(node->lewa);
		cout << node->wartosc << endl;
		czytanie2(node->prawa);
	}
}

void czytanie3(Drzewo *node) {
	if (node) {
		czytanie2(node->lewa);
		czytanie2(node->prawa);
		cout << node->wartosc << endl;
	}
}
int main() {

	struct Drzewo *head = new Drzewo;

	wstawNastepne(&head, 12);
	wstawNastepne(&head, 15);
	wstawNastepne(&head, 51);
	wstawNastepne(&head, 23);
	wstawNastepne(&head, 44);
	wstawNastepne(&head, 16);
	wstawNastepne(&head, 14);
	wstawNastepne(&head, 13);
	wstawNastepne(&head, 11);
	wstawNastepne(&head, 5);
	czytanie3(head);

	return 0;
}
