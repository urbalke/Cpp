#include <iostream>

using namespace std;

struct Node {
	int data;
	struct Node *next;
};

void wstaw_w_puste_miejsce(struct Node **last, int nowe_dane) {

	if ((*last) != NULL) {

		return;
	}

	struct Node *temp = new Node;

	temp->data = nowe_dane;
	(*last) = temp;
	(*last)->next = (*last);

}

void wstaw_na_poczatku(struct Node **last, int nowe_dane) {

	if ((*last) == NULL) {
		return wstaw_w_puste_miejsce(last, nowe_dane);
	}

	struct Node *temp = new Node;
	temp->data = nowe_dane;
	temp->next = (*last)->next;
	(*last)->next = temp;

}

void wstaw_koniec(struct Node **last, int nowe_dane) {

	if ((*last) == NULL) {
		return wstaw_w_puste_miejsce(last, nowe_dane);
	}

	struct Node *temp = new Node;

	temp->data = nowe_dane;
	temp->next = (*last)->next;
	(*last)->next = temp;
	(*last) = temp;

}

void insert(struct Node **last, int nowe_dane, int index) {

	if ((*last) == NULL) {
		return wstaw_w_puste_miejsce(last, nowe_dane);
	}

	struct Node *temp = new Node;
	struct Node *kopia = *last;
	struct Node *kopia2 = *last;

	temp->data = nowe_dane;

	for (int i = 0; i < index; i++) {
		kopia = kopia->next;

	}
	temp->next = kopia;
	while ((kopia2)->next != temp->next) {
		kopia2 = kopia2->next;
	}

	kopia2->next = temp;

}
void wypisywanie_listy(struct Node **last) {

	struct Node *pierwszy_next = new Node;

	if ((*last) == NULL) {
		cout << "Lista jest pusta" << endl;
		return;
	}

	pierwszy_next = (*last)->next;

	do {
		cout << pierwszy_next->data << "==>";
		pierwszy_next = pierwszy_next->next;

	} while (pierwszy_next != (*last)->next);

	if (pierwszy_next == (*last)->next)
		cout << pierwszy_next->data;
	cout << "\n";

}

void usuwanie_elem(struct Node **last, int index) {

	if ((*last) == NULL) {
		cout << "Lista jest pusta" << endl;
		return;
	}

	struct Node *temp = new Node;
	struct Node *kopia = *last;
	struct Node *kopia2 = (*last);

	for (int i = 0; i < index; i++) {
		kopia = kopia->next;
	}
	temp = kopia;

	while ((kopia2)->next != temp) {
		(kopia2) = (kopia2)->next;
	}
	kopia2->next = temp->next;
	delete (kopia);
}

int main() {

	struct Node *last = NULL;

	wstaw_na_poczatku(&last, 4);
	wstaw_na_poczatku(&last, 3);
	wstaw_na_poczatku(&last, 5);
	wstaw_koniec(&last, 7);
	wstaw_koniec(&last, 9);
	insert(&last, 50, 2);

	usuwanie_elem(&last, 2);

	wypisywanie_listy(&last);

	return 0;

}
