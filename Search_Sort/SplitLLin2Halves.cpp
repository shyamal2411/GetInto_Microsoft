#include <bits/stdc++.h>
using namespace std;

// https://www.geeksforgeeks.org/split-a-circular-linked-list-into-two-halves/
class Node
{
	public:
	int data;
	Node *next;
};

void splitList(Node *head, Node **head1, Node **head2)
{
	Node *slow = head;
	Node *fast = head;
	
	if(head == NULL)
		return;
	
	/* If there are odd nodes in the circular list then
	fast->next becomes head and for even nodes
	fast->next->next becomes head */
	while(fast->next != head &&
		fast->next->next != head)
	{
		fast = fast->next->next;
		slow = slow->next;
	}
	
	/* If there are even elements in list
	then move fast */
	if(fast->next->next == head)
		fast = fast->next;
		
	/* Set the head pointer of first half */
	*head1 = head;
		
	/* Set the head pointer of second half */
	if(head->next != head)
		*head2 = slow->next;
		
	/* Make second half circular */
	fast->next = slow->next;
		
	/* Make first half circular */
	slow->next = head;
}

/* UTILITY FUNCTIONS */
/* Function to insert a node at
the beginning of a Circular linked list */
void push(Node **head, int data)
{
	Node *ptr1 = new Node();
	Node *temp = *head;
	ptr1->data = data;
	ptr1->next = *head;
		
	/* If linked list is not NULL then
	set the next of last node */
	if(*head != NULL)
	{
		while(temp->next != *head)
		temp = temp->next;	
		temp->next = ptr1;
	}
	else
		ptr1->next = ptr1; /*For the first node */
	
	*head = ptr1;
}

/* Function to print nodes in
a given Circular linked list */
void printList(Node *head)
{
	Node *temp = head;
	if(head != NULL)
	{
		cout << endl;
		do {
		cout << temp->data << " ";
		temp = temp->next;
		} while(temp != head);
	}
}

int main()
{
	int list_size, i;
		
	Node *head = NULL;
	Node *head1 = NULL;
	Node *head2 = NULL;
	push(&head, 12);
	push(&head, 56);
	push(&head, 2);
	push(&head, 11);
	
	cout << "Original Circular Linked List";
	printList(head);		
	splitList(head, &head1, &head2);
	
	cout << "\nFirst Circular Linked List";
	printList(head1);
	
	cout << "\nSecond Circular Linked List";
	printList(head2);
	return 0;
}
