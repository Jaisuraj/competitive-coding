#include<iostream>
#include <map>
#include <stack>
#include <numeric>
using namespace std;

typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

int main()
{
    fast;
    int t;
    cin >> t;
    for (int i = 0; i < t;i++)
    {
        ll n;
        cin >> n;
        ll a[n], in[n];
        for (ll j = 0; j < n;j++)
        {
            cin >> a[j];
        }
        ll sum= accumulate(a, a+n,0);
        if(sum!=0)
        {
            cout << "No" << endl;
        }
        else
        {
            if()
            {
                
            }
        }
    }
}