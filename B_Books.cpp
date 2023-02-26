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
    if(prefix[x]<=r)
        return 0;
    return 1;
}
int main()
{
    fast;
    cin>>n>>t;
    v.resize(n);
    prefix.resize(n);
    for (ll i = 0;i<n;i++)
    {
        cin >> v[i];
    }

        int r = 0;
    int sm = 0;
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        while (r < n && sm + v[r] <= t) {
            sm += v[r];
            ++r;
        }
        ans = max(ans, r - i);
        sm -= v[i];
    }

    cout << ans << '\n';
}