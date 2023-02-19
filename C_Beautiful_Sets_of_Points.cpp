#include<iostream>
#include <map>
#include <vector>
#include<algorithm>
#include<numeric>
using namespace std;

typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

int main()
{
    fast;
    int x,y;
    cin>>x>>y;
    int k = min(x, y);
    cout << k + 1 << endl;
    for (int i=0; i <k+1; i++)
    {
        cout << i << " " << k - i<<endl;
    }
}