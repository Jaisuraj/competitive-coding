#include<iostream>
#include <map>
#include <vector>
#include<algorithm>
#include<numeric>
#include<cmath>
#include<cstring>
#include<iomanip>
#include<set>
#include<unordered_set>
using namespace std;

typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

ll n,k,m;

const ll N = 1000000000000L;
vector<pair<ll, ll>> p;
vector<ll> v;
unordered_set<ll> cubes;

int main()
{
    fast;
    ll t;
    cin >>t;
    while (t--)
    {
        cin >> n >> m;
        v.resize(m);
        for (ll i = 0; i < m; i++)
        {
            cin >> v[i];
        }
        map<ll, ll> mp;
        ll t1 = 1,t2=n;
        for (ll i = 1; i <= n; i++)
        {
            mp[i] = -1;
        }
        for (ll i = 0; i < m; i++)
        {
            if(t2==0)
                break;
            if(mp.find(v[i])==mp.end())
            {
                mp[v[i]] = 1;
                mp[t2] = t1;
                t2--;
            }
            t1++;
        }
        for(auto x: mp)
        {
            if(x.first<=n)
                cout << x.second<<" ";
            
        }
        cout << endl;
    }
}