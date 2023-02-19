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
        ll n, z,max=0,k;
        cin >> n >> z;
        ll a[n];
        for (ll i = 0; i < n;i++)
        {
            cin >> a[i];
        }

        for (ll i = 0; i < n;i++)
        {
            a[i] = a[i] | z;
            k = a[i];
            if (k > max)
            {
                max=k;
            }
            z = a[i] & z;
        }
        cout<< max << endl;
    }
}