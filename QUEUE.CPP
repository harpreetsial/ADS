#include<conio.h>
#include<iostream.h>
#include<process.h>
#include<malloc.h>

struct node
{
   int data;
   struct node *next;
};
class queue
{
   struct node *front,*rear;
   public:
      queue() // constructure
      {
	 front=rear=NULL;
      }
      void insert(); // to insert an element
      void del();  // to delete an element
      void show(); // to show the stack
};
// Insertion
void queue::insert()
{
   int value;
   struct node *ptr;
   cout<<"\nInsertion\n";
   cout<<"Enter a number to insert: ";
   cin>>value;
   ptr=new node;
   ptr->data=value;
   ptr->next=NULL;
   if(front==NULL)
      front=ptr;
   else
      rear->next=ptr;
   rear=ptr;
   cout<<"\nNew item is inserted to the Queue!!!";
   getch();
}

void queue::del()
{
   if(front==NULL)
   {
      cout<<"\nQueue is empty!!";
      getch();
      return;
   }
   struct node *temp;
   temp=front;
   front=front->next;
   cout<<"\nDeletion Operation........\nDeleted value is "<<temp->data;
   delete temp;
   getch();
}
void queue::show()
{
   struct node *ptr1=front;
   if(front==NULL)
   {
      cout<<"The Queue is empty!!";
      getch();
      return;
   }
   cout<<"\nThe Queue is\n";
   while(ptr1!=NULL)
   {
      cout<<ptr1->data<<" ->";
      ptr1=ptr1->next;
   }
   cout<<"END";
   getch();
}

int main()
{
   clrscr();
   queue q;
   int choice;
   while(1)
   {
      cout<<"\n-----------------------------------------------------------";
      cout<<"\n\t\tQUEUE USING LINKED LIST\n\n";
      cout<<"1:INSERTION\n2:DELETION\n3:DISPLAY QUEUE\n4:EXIT";
      cout<<"\nEnter your choice(1-4): ";
      cin>>choice;
      switch(choice)
      {
       case 1:
	  q.insert();
	  break;
       case 2:
	  q.del();
	  break;
       case 3:
	  q.show();
	  break;
       case 4:
	  exit(0);
	  break;
       default:
	  cout<<"Please enter correct choice(1-4)!!";
	  getch();
	  break;
       }
   }
   return 0;
}