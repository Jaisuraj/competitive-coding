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
bool fn(map<ll, ll> mp, ll t, ll n)
{
    ll r = n-mp.size();
    ll t1 = 0;
    ll t2 = 0;
    for (auto x : mp)
    {
        if (x.second <= t)
        {
            ll remt = (t - x.second);
            t2 += (remt) / 2;
        }
        else
        {
            t1 += (x.second - t);
        }
    }

    t2 += r * (t / 2);

    if (t2 >= t1)
        return 1;
    else
        return 0;
}

int main()
{
    fast;
    ll t;
    cin >> t;
    while (t--)
    {
    ll n, m,i;
    cin >> n >> m;

    vector<ll> a(m);
    map<ll, ll> mp;
    for (i = 0; i < m; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }

    ll s = 0;
    ll maxi = 0;

    for (auto x : mp)
        maxi = max(maxi, x.second);

    ll ans = maxi;
    while (s <= maxi)      //binary serach
    {
        ll mid = (s + maxi) / 2;

        if (fn(mp, mid, n))
        {
            ans = mid;
            maxi = mid - 1;
        }
        else
            s = mid + 1;
    }
    cout << ans << endl;
    }
}