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
    while (t--)
    {
        ll n,k;
        cin >> n>>k;
        vector<pair<ll, ll>> v;
        for (ll i = 0; i < n; i++)
        {
            ll x, y;
            cin >> x >> y;
            v.push_back({x, y});
        }
        ll c = 0, f = 0;
        for (ll i = 0; i < n; i++)
        {
            if(v[i].first==k)
            {
                c++;
            }
            if(v[i].second==k)
            {
                f++;
            }
        }
        if(c>0&&f>0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}