#include<iostream>
#include <map>
#include <vector>
#include<algorithm>
#include<numeric>
#include<cmath>
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
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll a[n],a1[n],k;
        for (ll i = 0; i < n;i++)
        {
            cin >> a[i];
            a1[i] = a[n];
        }
        sort(a1, a1 + n);
        k =a[0];
        for (ll i = 1; i < n - 1; i++)
        {
            k=k^a[i];
        }
        cout << k << endl;
        
    }
}