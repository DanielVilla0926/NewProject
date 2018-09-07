// Linkedlistsingly.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

struct node
{
	int data;
	node* next = NULL;
};

class Llist
{
	public:
		node * head;

		void Newnode(node* head, int value)
		{
			node* Newn = new node;
			Newn->data = value;
			node* temp ;
			temp = head;
			while (temp->next )
			{
				temp = temp->next;
			}
			temp->next = Newn;
		}

		void Outlist(node* head)
		{
			node* temp = head;
			while (temp!= NULL)
			{
				cout << temp->data << "\t";
				temp = temp->next;
			}
		}
		
		void Deletenode(node* head, int target)
		{
			node*temp;
			temp = head;
			while (temp->next->data != target && temp->next != NULL)
			{
				temp = temp->next;
			}
			if (temp->next->data == target)
			{
				node* hold;
				hold = temp;
				temp = temp->next->next;
				hold = hold -> next;				
				delete hold;
			}
			
		}

};


int main()
{
	Llist check;
	check.head = new node;
	check.head -> data = 8;
	check.Newnode(check.head, 8);
	check.Newnode(check.head, 5);
	check.Newnode(check.head, 3);
	check.Newnode(check.head, 2);
	check.Deletenode(check.head, 5);
	check.Outlist(check.head);
	system("pause");
    return 0;
}

