#include "linklist.h"
#include <iostream>
#include <conio.h>


int main(){
	Node* head = NULL;

	for (int i = 0; i < 6; i++){
		push(&head, i);
	}

	//std::cout << numberElementsInList(head) << std::endl;
	//printList(head);

	//deleteList(head);

	////assert(head == NULL);
	//std::cout << std::endl << numberElementsInList(head);

	/*for (int i = 0; i < 4; i++){
		std::cout << pop(head) << std::endl;
	}*/

	std::cout << numberElementsInList(head) << std::endl;
	
	insertNthList(head, 3, -1);

	printList(head);
	std::cout << numberElementsInList(head) << std::endl;

	_getch();

	return 0;
}
