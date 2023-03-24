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
node* insertmid(node* head,int data,int pos)
{
    node *temp = getNewNode(data);
    if(head==NULL)
    {
        head = temp;
    }
    else{
        node *ptr = head;
        while(pos>1)
        {
            ptr = ptr->next;
            pos = pos - 1;
        }
        node *temp1 = ptr->next;
        temp->next = temp1;
        ptr->next = temp;
    }
    return head;
}
node* insertbegin(node* head,int data)
{
    node *temp1 = getNewNode(data);
    temp1->next = head;
    return temp1;
}

node* delbeg(node* head)
{
    node *temp1 = new node;
    head = head->next;
    temp1 = head;

    return temp1;
}

node* delend(node* head)
{
    node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = NULL;
    return head;
}

node* delbet(node* head,int pos)
{
    node *temp = head;
    node *temp2 = head;
    while(pos>1)
    {
        temp = temp->next;
        pos--;
    }
    temp->next = temp->next->next;
    return head;
}

int main()
{
    node* head=NULL;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        switch(n)
        {
        case 1:
            int k;
            cin >> k;
            head = insertbegin(head, k);
            break;
        case 0:
            //head = delbet(head,2);
            while (head != NULL)
            {
                cout << head->data << "=>";
                head = head->next;
            }
            cout <<"NULL" << endl;
        }
}
}

