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
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll c1 = 0, c2 = 0,k,k1;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i]%2==0)
        {
            c1++;
            k = i;
        }
        else{
            c2++;
            k1 = i;
        }
    }
    if(c1==1)
    {
        cout << k + 1 << endl;
        
    }
    else if(c2==1)
    {
        cout << k1 + 1 << endl;
    }
}