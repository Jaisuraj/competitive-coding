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

void printPostorder(struct tree* node)
{
    if (node == NULL)
        return;
    printPostorder(node->left);
    printPostorder(node->right);
    cout << node->data << " ";
}
void printInorder(struct tree* node)
{
    if (node == NULL)
        return;
 
    printInorder(node->left);
    cout << node->data << " ";
    printInorder(node->right);
}
 
void printPreorder(struct tree* node)
{
    if (node == NULL)
        return;
    cout << node->data << " ";
    printPreorder(node->left);
    printPreorder(node->right);
}
 
tree* newtree(int k)
{
    tree* temp = new tree;
    temp->data = k;
    temp->left = temp->right = NULL;
    return temp;
}
bool findPath(tree* root, vector<int>& path, int k)
{
    if (root == NULL)
        return false;
    path.push_back(root->data);

    if (root->data == k)
        return true;
    if ((root->left && findPath(root->left, path, k))
        || (root->right && findPath(root->right, path, k)))
        return true;
    path.pop_back();
    return false;
}
int findLCA(tree* root, int n1, int n2)
{
    vector<int> path1, path2;
 
    if (!findPath(root, path1, n1)
        || !findPath(root, path2, n2))
        return -1;

    int i;
    for (i = 0; i < path1.size() && i < path2.size(); i++)
        if (path1[i] != path2[i])
            break;
    return path1[i - 1];
}
int main()
{
    tree* t=newtree(5);
    t->right = newtree(8);
    t->right->right =newtree(9);
    t->left = newtree(4);
    t->right->left =newtree(6);
    // printInorder(t);
    // cout << endl;
    // printPreorder(t);
    // cout << endl;
    // printPostorder(t);
    // cout << endl;
    cout << "LCA(9, 8) = " << findLCA(t, 6, 8);
}