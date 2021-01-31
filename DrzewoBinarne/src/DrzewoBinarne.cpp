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
	struct Drzewo *head, *lewa, *prawa;
};

void wstawWPusteMiejsce(struct Drzewo **head, int nowaWartosc) {

	if ((*head) != NULL) {

		return;
	}

	struct Drzewo *temp = new Drzewo;

	temp->wartosc = nowaWartosc;

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

	if (nowaWartosc % 2 == 0) {

		while (kopia->lewa != NULL) {
			kopia = kopia->lewa;
		}
		(kopia)->lewa = temp;
		(kopia)->lewa->head = (kopia);
		(kopia)->lewa->level += 1;
	} else {

		while (kopia->prawa != NULL) {
			kopia = kopia->lewa;
		}
		(kopia)->prawa = temp;
		(kopia)->prawa->head = (kopia);
		(kopia)->prawa->level += 1;
	}

}

int main() {

	struct Drzewo *head = NULL;

	wstawNastepne(&head, 4);
	wstawNastepne(&head, 6);
	wstawNastepne(&head, 8);

	return 0;
}
