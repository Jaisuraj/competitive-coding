#include<iostream>

using namespace std;

struct node
{
    int data;
    node *next;
};

node* getNewNode(int data)
{
    node* x=new node;
    x->data=data;
    x->next=NULL;
    return x;
}

node *insertnode(node* head,int data)
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
node* delalter(node*head)
{
    node *temp = head;
    node *prev = head; 
    node *node = head->next; 
  
    while (prev != NULL && node != NULL) 
    { 
        prev->next = node->next; 
        delete(node);
        prev = prev->next; 
        if (prev != NULL) 
            node = prev->next; 
    } 
    return head;
}


int main()
{
    int n;
    node *head=NULL;
    while (1)
    {
        cin>>n;
        if(n==-1)
            break;
        head = insertnode(head, n);
    }
    node *temp = head;
    head = delalter(head);
    node *temp1 = head;
    while (temp1 != NULL)
    {
        cout << temp1->data << " ";
        temp1 = temp1->next;
    }
    cout << endl;

}