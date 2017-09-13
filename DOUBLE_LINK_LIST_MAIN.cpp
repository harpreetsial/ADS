#include "DOUBL.cpp"
#include<conio.h>
void main()
{
	linkedlist  llist;
	int a, b,n,temp;
	cout << "Number of elements you want to enter?";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Enter Number " << i + 1<<"\t";
		cin >> temp;
		llist.insert_backside(temp);
		
	}
	
	llist.traverse_frontside();
	cout << "\nEnter the value (0 or 1) of first boolean variable ";
	cin >> a;
	cout<< "Enter the value (0 or 1) of Second boolean variable ";
	cin >> b;
	if (a == 0)
	{
		if (b == 0)
		{
			cout << "Both Variable are 0 hence XOR will give no output";
		}
		else if (b == 1)
		{
			cout << "The linked list will be traversed from back";
			llist.traverse_rearside();
		}
		else
		{
			cout << "Wrong inputs";
		}

	}
	else if (a == 1)
	{
		if (b == 0)
		{
			cout << "The linked list will be traversed from front";
			llist.traverse_frontside();
			
		}
		else if (b == 1)
		{
			cout << "Both Variable are 1 hence XOR will give no output";
		}
		else
		{
			cout << "Wrong inputs";
		}

	}
	else
	{
		cout << "wrong inputs";
	}
	

	_getch();
}
