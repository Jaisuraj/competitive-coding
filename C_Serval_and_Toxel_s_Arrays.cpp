#include<iostream>
#include <map>
#include <vector>
#include<algorithm>
#include<numeric>
#include<set>
#include<cmath>
#include<cstring>
#include<iomanip>
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
        ll m, n,ans=0;
        cin>>n>>m;
        vector<ll> a(n + 1);
        set<ll> s;
        vector<pair<ll, ll>> p;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            s.insert(a[i]);
        };
        ll k = 0;
        ll x, y;
        for (ll i = 0;i<m;i++)
        {
            //ll k = s.size();
            cin >> x >> y;
            p.push_back({x, y});    
        }
        for (ll i = 0;i<m;i++)
        {
            ll temp = a[p[i].first - 1];
            for (ll j = i + 1; j < m; i++)
            {
            a[p[i].first - 1] = y;
            s.insert(a[x - 1]);
            cout << s.size() << "kdhjwk" << endl;
            ans = ans + s.size();
            k = s.size();
            }
            a[p[i].first - 1] = y;

        }
            cout << ans << endl;
    }
}