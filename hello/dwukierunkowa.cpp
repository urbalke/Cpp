#include <iostream>

using namespace std;

void insert_front(struct Node **head, Bohater *new_data) {
	//allocate memory for New node
	struct Node *newNode = new Node;

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
