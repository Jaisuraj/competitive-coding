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

ll k, n;
vector<ll> prefix;
ll check(ll mid,ll r)
{
    if(prefix[mid]<=r)
        return 0;
    return 1;
}
int main()
{
    fast;
    cin >> n >> k;
    prefix.resize(n);
    for (ll i = 0; i < n; i++)
    {
        if(i)
            prefix[i] = prefix[i - 1] + 5*(i+1);
        else
        {
            prefix[i] = 5;
        }
    }
    ll r = 240 - k;
    
    if (r)
    {
        ll lo = 0,hi=n-1,ans=n;
        while(lo<=hi)
        {
            int mid = (lo + hi) / 2;
            if(check(mid,r)==0)
            {
                lo = mid + 1;
            }
            else{
                hi = mid - 1;
                ans = mid;
                
            }
        }
        cout << ans << endl;
    }
    else
        cout << 0 << endl;
}