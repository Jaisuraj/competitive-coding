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
    while(head!=NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}