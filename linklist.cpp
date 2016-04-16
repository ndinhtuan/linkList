#include "linklist.h"
#include <iostream>
#include <cassert>

void moveNode(Node **destRef, Node **sourceRef){

	assert(*sourceRef != NULL);
	Node *temp = *sourceRef;

	*sourceRef = (*sourceRef)->next;
	temp->next = *destRef;
	*destRef = temp;

}

void removeDuplicates(Node *head){
	//InsertSort(&head);
	int len = numberElementsInList(head);
	Node *temp = NULL;

	for (int i = 0; i < len - 1; i++){

		if (head->next != NULL && head->data == (head->next)->data){

			temp = head->next;
			head->next = (head->next)->next;
			delete temp;
			continue;

		}

		head = head->next;
	}
}

void splitFrontBack(Node *source, Node **refFront, Node **refBack){

	int len = numberElementsInList(source);

	if (len == 1 || len == 0){
		*refFront = source;
	}
	else{

		int lenFront = len / 2 + ((len % 2 == 0) ? 0 : 1 );
		*refFront = source;

		for (int i = 0; i < lenFront - 1; i++){

			*refBack = source->next;
			source = source->next;
		}

		Node *endFront = *refBack;
		*refBack = (*refBack)->next;
		endFront->next = NULL;

	}

}

void append(Node **pToHead1, Node **pToHead2){
	if (*pToHead1 == NULL){
		*pToHead1 = *pToHead2;
		*pToHead2 = NULL;
	}
	else{

		Node *current = *pToHead1;

		while (current->next != NULL){

			current = current->next;

		}
		
		current->next = *pToHead2;
		*pToHead2 = NULL;

	}
}

void InsertSort(Node **pToHead){
	Node *result = NULL;
	Node *current = *pToHead;

	while (current != NULL){

		
 		SortedInsert(&result, current);
		current = current->next;

	}

	*pToHead = result;
}

void SortedInsert(Node **pToHead, Node *newNode){

	if (*pToHead == NULL || (*pToHead)->data < newNode->data){
		/*newNode->next = (*pToHead);
		*pToHead = newNode;*/ // we need to create new node beacause in function InsertSort use this function but mustn't change it 's node - is assigned newNode.
		Node *_newNode = new Node;
		_newNode->data = newNode->data;
		_newNode->data = newNode->data;
		_newNode->next = (*pToHead);
		*pToHead = _newNode;

		return;
	}

	//int nodeNth = 1; // this is clash in position node nth 
	Node *head1 = *pToHead;
	Node *_newNode = new Node;
	_newNode->data = newNode->data;

	/*if ((*pToHead)->data < _newNode->data){

		_newNode->next = *pToHead;
		*pToHead = newNode;

	}
	else{*/

		while (head1->next != NULL && head1->next->data > _newNode->data){

			head1 = head1->next;

		}

		_newNode->next = head1->next;
		head1->next = _newNode;

	//}

// newNode's next still not change
	
}

void insertNthList(Node*& head, int n, int data){

	assert(0 < n && n <= numberElementsInList(head));

	Node* headTempory = head;

	
	if (n != 1){

		for (int i = 0; i < n - 2; i++){

			headTempory = headTempory->next;

		}

		push(&headTempory->next, data);
	}
	else{
		push(&head, data);
	}


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





