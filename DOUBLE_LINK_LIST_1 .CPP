#include<iostream.h>

//using namespace std;
struct node
{
	int data;
	node *next;
	node *prev;
};
class linkedlist
{
	node *frontSide, *rearSide;
public:
	linkedlist()
	{
		frontSide = NULL;
		rearSide = NULL;
	}
	node *newNode(int d)
	{
		node *temp = new node();
		temp->data = d;
		temp->next = NULL;
		temp->prev = NULL;
		return temp;
	}
	void insert_backside(int data)
	{
		node *newnode = newNode(data);
		if ((frontSide == NULL) && (rearSide ==NULL)) //Means this is the first element in the linked list
		{
			frontSide = newnode;
			rearSide = newnode;
		}
		else
		{
			newnode->prev = rearSide;
			rearSide->next = newnode;
			rearSide = newnode;
			
		}
	}
	void traverse_frontside()
	{
		node * ptr = frontSide;
		cout << "\nThe Content of the linked list--->\n";
		while (ptr != NULL)
		{
			cout << ptr->data << "\t";
			ptr = ptr->next;
		}

	}
	void traverse_rearside()
	{
		node * ptr = rearSide;
		cout << "\nThe Content of the linked list--->\n";
		while (ptr != NULL)
		{
			cout << ptr->data << "\t";
			ptr = ptr->prev;
		}

	}
};
