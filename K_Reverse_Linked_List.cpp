#include<iostream>
using namespace std;
struct node  
{ 
int data; 
struct node *next; 
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

node* reverse1(node* head, int k)
{
    if (!head)
        return NULL;
    node* current = head;
    node* next = NULL;
    node* prev = NULL;
    int count = 0;
    while (current != NULL && count < k) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }
    if (next != NULL)
        head->next = reverse1(next, k);
    return prev;
}
int main()
{
    node* head=NULL;
    int n;
    while (1)
    {


        cin >> n;
        if(n==-1)break;
        head = insertnode(head, n);
    }
    int k;
    cin >> k;
    if(k!=0)head = reverse1(head, k);
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }

}
