#include<iostream>
using namespace std;
struct node  
{ 
int data; 
struct node *next; 
struct node *prev; 
}; 

node* getNewNode(int data)
{
    node* x=new node;
    x->data=data;
    x->prev=NULL;
    x->next=NULL;
    return x;
}

node*insertNodeBeg(node*head, int data)
{
    node *ptr=getNewNode(data);
    if(head==NULL)
    {
        head=ptr;
    }
    else
    {
        head->prev=ptr;
        ptr->next=head;
        head=ptr;
    }
    return head;
}

node *insertNodeEnd(node *head,int data)
{
	node *temp=getNewNode(data);
	if (head==NULL)
	{
		head=temp;
	}
	else
	{
		node *ptr=head;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
			
		}
		ptr->next=temp;
	}
	return head;
}

void Display(node*head)
{
    cout<<"Display List\n"<<endl;
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL";
    cout<<endl;
}


void Odd(node*head)
{
  node*temp=head;
  while(temp!=NULL)
    {
      if(temp->data%2!=0 )
      cout<<temp->data<<"->";
      temp=temp->next;
    }
}

int main()
{
    cout<<"1.Insert Node At Begininng\n2.Insert Node At End\n3. Display\n";
    int x,ch;
    node*head=NULL;
    do
    {
    cout<<"Enter your choice: ";
    cin>>ch;
    switch(ch)
    {
        case 1:
            cout<<"Enter the element to be inserted at start::\n";
            cin>>x;
            head=insertNodeBeg(head,x);
            break;

        case 2:
            cout<<"Enter the element to be inserted at end::\n";
            cin>>x;
            head=insertNodeEnd(head,x);
            break;

        case 3:
            Display(head);
            break;
        
    case 4: Odd(head);
            break;
    }
    }
    while(ch<5);
}

