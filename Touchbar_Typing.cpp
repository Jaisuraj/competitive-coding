#include<iostream>
#include <map>
#include <vector>
#include<algorithm>
#include<numeric>
#include<list>
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
    for (ll i = 1; i <= t;i++)
    {
        ll n;
        cin >> n;
        ll s[n];
        for (ll j = 0; j < n;j++)
        {
            cin >> s[j];
        }
        ll m,a=0;
        cin >> m;
        ll k[m];
        for (ll j = 0; j < m;j++)
        {
            cin >> k[j];
        }
        map<ll, ll> mp;
        for (ll j = 0; j < m;j++)
        {
            mp.insert({k[j],j});
        }
        ll c = mp[s[0]];
        for (ll j = 1; j < n;j++)
        {
            ll cc = mp[s[j]];
            a = a + abs(c - cc);
            c = cc;
        }
         cout << "Case #" << i << ": ";
        cout << a << endl;
    }
}