#include<iostream>
#include <map>
#include <vector>
#include<algorithm>
#include<numeric>
#include<cmath>
#include<set>
#include<unordered_set>
using namespace std;

typedef long long int ll ;
typedef long double lld;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

#define mod 1000000000+7

int main()
{
    fast;
    ll t;
    cin >> t;
   while(t--)
    {
    ll n;
    cin >> n;
    vector<ll> v(n + 1, 1);
    cout << 2 << endl;
    for (ll i = 1; i <= n; i++)
    {
        if (v[i] == 0)
            continue;
        for (ll j = i; j <= n; j *= 2)
        {
            if (v[j] == 1)
            {
                cout << j << " ";
                v[j] = 0;
            }
        }
    }
    cout << endl;
    }
}