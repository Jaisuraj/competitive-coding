#include<iostream>
#include <map>
#include <vector>
#include<algorithm>
#include<numeric>
#include<cmath>
#include<cstring>
using namespace std;

typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)


int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
        ll x, y;
        cin>>x>>y;
        ll l = 2*(x - y);
        cout << l << endl;
        for (ll i = y +1; i <= x;i++)
        {
            cout << i << " ";
        }
        for (ll i = x - 1; i >= y;i--)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}