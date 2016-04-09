#include "linklist.h"
#include <iostream>
#include <cassert>


void insertNthList(Node*& head, int n, int data){

	assert(n <= numberElementsInList(head));

	Node* headTempory = head;

	for (int i = 0; i < n - 1; i++){
		headTempory = headTempory->next;
	}

	Node *head1 = headTempory;
	push(&headTempory, data);
}

void deleteList(Node*& head){
	int len = numberElementsInList(head);
	Node* head1 = NULL;

	while (len){

		len--;
		head1 = head;

		for (int i = 0; i < len; i++){
			head1 = head1->next;
		}

		delete head1;
		//head1 = NULL;
	}

	head = NULL;

}

void push(Node **head, int data){

	Node *newNode = new Node;
	newNode->data = data;
	newNode->next = *head;
	*head = newNode;

}

void printList(const Node* head){

	while (head != NULL){
		std::cout << head->data << " ";
		head = head->next;
	}

}

int numberElementsInList(const Node* head){

	if (head == NULL) return 0;
	int len = 0;

	while (head != NULL){

		len++;
		head = head->next;

	}

	return len;


}

int pop(Node*& head){

	assert(head != NULL);
	Node* head1 = head;
	
	int returnData = head->data;
	head = head->next;

	delete head1;

	return returnData;
}





