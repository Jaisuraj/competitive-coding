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
        ll n, m,k;
        cin >> n>>m>>k;
        ll a,b;
        map<ll, ll> mp;
        for (ll j = 1; j <= n;j++)
        {
            mp[j] = 0;
        }
            for (ll j = 0; j < m; j++)
            {
                cin >> a >> b;
                mp[b] = -1;
            }
        ll c = 0,cc=0;
        for (ll j = 1; j <= n; j++)
        {
            if(mp[j]==-1)
                c++;
            // else{
            //     cc++;
            // }
        }
        cout << c << endl;
    }
}