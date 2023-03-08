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
string s;
const ll N = 1000000000000L;
vector<ll> v;

bool check(ll x)
{
    int needed = 0, lastleft = 0;
    for (ll i = 0; i < n;i++)
    {
        if(v[i]<=lastleft)
        {
            lastleft -= v[i];
        }
        else
        {
            needed++;
            lastleft = x - v[i];
        }
        if(needed>k)
            return 0;
    }
    if(needed>k)
        return 0;
        else
        return 1;
}
int main(){
    fast;
    ll t;
    cin >> t;
    while(t--){
        cin>>n>>k;
        v.resize(n);
        ll lo = -1, hi = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            lo = max(lo, v[i]);
            hi += v[i];
        }
       
        ll ans = 0;
        while(lo<=hi)
        {
            ll mid = (lo + hi) / 2;
            if(check(mid))
            {
                
                ans = mid;
                hi = mid - 1;
                
            }
            else
            {
                lo = mid + 1;
            }
        }
        cout << ans << endl;
    }
}

