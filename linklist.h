struct Node{
	int data;
	Node* next;
};

// - function add a element to list head
// @ parameter head is the fist Node of list
// @ data is data of new Node.
void push(Node **head, int data);

// - function print all of elements 's data of list out screen
// @ parameter head is the first node of list, it is constant not to change it 's data
void printList(const Node* head);

// -function count list of elements
// @ parameter head is the first head, which point and manage list
// - function return the number of list 's elements
int numberElementsInList(const Node* head);

// This function delete link list - delete each node finally, head to NULL
// @ parameter head is list of head, need to & because need to change head to NULL
void deleteList(Node*& head);

// this function return head's data and delete node head
// @ parameter head is list of head, need to & because need to change head to head 's next
int pop(Node*& head);

// this function add Node has data equal data parameter
// @ parameter head is list of head
// @ parameter n is n th node in list
// @ parameter data is node of data need to add
void insertNthList(Node*& head, int n, int data);
