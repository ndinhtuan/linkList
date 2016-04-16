#include "linklist.h"
#include <iostream>
#include <conio.h>


int main(){
	Node* head = NULL;

	push(&head, 1);
	push(&head, 4);
	push(&head, 1);
	push(&head, 2);
	push(&head, 9);
	push(&head, 7);

	Node* head1 = NULL;
	push(&head1, 1);
	push(&head1, 4);
	push(&head1, 5);
	
	//std::cout << numberElementsInList(head) << std::endl;
	//printList(head);

	//deleteList(head);

	////assert(head == NULL);
	//std::cout << std::endl << numberElementsInList(head);

	/*for (int i = 0; i < 4; i++){
		std::cout << pop(head) << std::endl;
	}*/

	std::cout << "List 's length : " << numberElementsInList(head) << std::endl;
	
	//insertNthList(head, 7, -1);
	/*Node *newNode = new Node;
	newNode->data = -1;
	newNode->next = NULL;
	SortedInsert(&head, newNode);*/

	//InsertSort(&head);
	//append(&head, &head1);

	/*Node *frontRef = NULL;
	Node *backRef = NULL;

	printList(head);
	std::cout << std::endl;

	splitFrontBack(head, &frontRef, &backRef);

	
	printList(frontRef);
	std::cout << std::endl;
	printList(backRef);*/
	std::cout << "Previous list : " << std::endl;
	//InsertSort(&head);
	//printList(head);
	//std::cout << std::endl;

	//removeDuplicates(head);
	moveNode(&head, &head1);
	printList(head);
	std::cout << std::endl;
	printList(head1);

	//std::cout << numberElementsInList(head) << std::endl;

	_getch();

	return 0;
}
