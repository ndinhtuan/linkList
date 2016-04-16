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
// algorithm is create new node, node point to node in position n th, then node n - 1 point new node, this is push 's algorithm, so we only need to reference next 's node n th
void insertNthList(Node*& head, int n, int data);

// this function add newNode in list head is sorted and newNode is located in correct sorted position in list
// @ parameter head is sorted head
// @ parameter newNode is new node is existing node by user
void SortedInsert(Node **head, Node *newNode);

// this function sorted list with algorithm insertion sort
// @ parameter pToHead is pointer point to list of head need to sort increasing order.
void InsertSort(Node **pToHead);

// this function append list2 to list1 and list2 to NULL
// @ parameter pToHead1 is pointer, which point list1
// @ parameter pToHead2 is pointer, which point list2
void append(Node **pToHead1, Node **pToHead2);

// this function split list source 2 list is front and back
// @ parameter source is list need to split
// @ refFront is front half
// @ refBack is back half
void splitFrontBack(Node *source, Node **refFront, Node **refBack);

// this function take a list sorted in increasing order and delete any duplicate node in the list
// @ parameter head is list of head.
void removeDuplicates(Node *head);

// this function remove the front node from second list, then push it onto the front of the first
// @ parameter destRef is pointer, which point to first list
// @ parameter sourceRef is pointer, which point to second list
void moveNode(Node **destRef, Node **sourceRef);






























