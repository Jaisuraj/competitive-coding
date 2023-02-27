#include<iostream>
#include <map>
#include <vector>
#include<algorithm>
#include<numeric>
#include<cmath>
#include<cstring>
#include<iomanip>
using namespace std;

typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

ll n,t;
vector<ll> prefix,v;
ll check(ll x,ll r)
{
    if(prefix[x]<r)
        return 0;
    return 1;
}
int main()
{
    fast;
    cin >> n;
    v.resize(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    prefix.resize(n);
    for (ll i = 0; i < n; i++)
    {
        if(i)
            prefix[i] = prefix[i - 1] + v[i];
        else
        {
            prefix[i] = v[i];
        }
    }
    ll m;
    cin >> m;
    while(m--)
    {
        ll q;
        cin >> q;
        ll lo = 0,hi=n-1,ans=n;
        while(lo<=hi)
        {
            ll mid = (lo + hi) / 2;
            if(check(mid,q)==0)
            {
                lo = mid + 1;
            }
            else
            {
                hi = mid - 1;
                ans = mid+1;
            }
        }
        cout << ans << endl;
    }
}