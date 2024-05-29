#include<iostream>
using namespace std;

class node
{
public:
	int data;
	node* next;
	node* prev;

	node(int d)
	{
		data = d;
		next = NULL;
		prev = NULL;
	}

	void inserattail(node*& tail, int d)
	{
		node* temp = new node(d);

		tail->next = temp;
		temp->prev = tail;
		tail = temp;
	}

	void display()
	{
		node* temp = this;
		while (temp != NULL)
		{
			cout << temp->data << "->";
			temp = temp->next;
		}
		cout << "NULL";
	}
};

void main()
{
	node* node1 = new node(1);
	node* node2 = new node(2);
	node* node3 = new node(3);
	node* tail = node1;
	node1->next = node2;
	node2->next = node3;
	node1->inserattail(node3, 50);
	node1->display();
}