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
int findnode(node* head,int x)
{
    if(head==NULL)
    {
        return -1;
    }
    node *temp = head;
    int k = 0;
    while (temp->next!= NULL)
    {
        
        if (x == temp->data)
        {
            return k;
        }
        temp = temp->next;
        k++;
    }
    if(temp->data==x)
        return k;
    return -1;
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
    int x;
    cin >> x;
    cout << findnode(head, x) << endl;
}