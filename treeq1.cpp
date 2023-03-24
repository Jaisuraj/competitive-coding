#include<iostream>
#include <map>
#include <vector>
#include<algorithm>
#include<numeric>
#include<cmath>
#include<cstring>
#include<iomanip>
#include<set>
#include<unordered_set>
using namespace std;

typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

ll n,k,m;
string s;
const ll N = 1000000000000L;
const ll INF = 1;
vector<ll> a,b;

struct tree
{
    int data;
    struct tree *right;
    struct tree *left;
};
tree* newtree(int k)
{
    tree *temp = new tree;
    temp->data = k;
    temp->left = temp->right = NULL;
    return temp;
}
void printPostorder(struct tree* node)
{
    if (node == NULL)
        return;
    printPostorder(node->left);
    printPostorder(node->right);
    cout << node->data << " ";
}
void Inorder(struct tree* node)
{
    if (node == NULL)
        return;
 
    Inorder(node->left);
    //cout << node->data << " ";
    a.push_back(node->data);
    Inorder(node->right);
}
 
void printPreorder(struct tree* node)
{
    if (node == NULL)
        return;
    cout << node->data << " ";
    printPreorder(node->left);
    printPreorder(node->right);
}
tree* insert(tree* root,int data)
{
    if(root==NULL)
        return newtree(data);
    if(data<root->data)
        root->left = insert(root->left, data);
    else if(data>root->data)
        root->right = insert(root->right, data);
    return root;
}
tree* push(tree* head,int k)
{
    tree *temp = NULL;
    temp = new tree;
    temp->data = k;
    if(temp->data==0)
    {
        head = temp;
        return head;
    }
    tree* temp1 = NULL;
    temp1 = head;
    while(1)
    {
        if(k<=temp1->data)
        {
            if(temp1->left==NULL)
            {
                break;
            }
            temp1 = temp1->left;
        }
        if(k>temp1->data)
        {
            if(temp1->right==NULL)
            {
                break;
            }
            temp1 = temp1->right;


        }
        if(k>temp1->data)
        {
            temp1->right = temp;
        }
        else{
            temp1->left=temp;
        }
        

    }
    return head;
}

int main()
{
    
    ll n;
    cin>>n;
    tree* t=newtree(n);
    while(1)
    {
        cin >> n;
        if (n == -1)
            break;
        t = insert(t, n);
    }
    ll k;
    cin >> k;

     Inorder(t);
     cout << endl;
     cout << a[k] << endl;
}