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
vector<ll> a,b;

bool check(ll x)
{
    ll c = 0;
    for(ll i = 0;i<n;i++)
    {
        ll x1 = upper_bound(b.begin(), b.end(), x - a[i]) - b.begin();
        c += x1;
    }
    return c>=k;
}
int main(){
    fast;
    ll t;
    cin >> t;
    while(t--){
        cin >> n >> m;
        a.resize(n);
        b.resize(m);
        cin >> k;
        for (ll i = 0; i < n;i++)
        {
            cin >> a[i];
        }
        for (ll i = 0; i < m;i++)
        {
            cin >> b[i];
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        ll lo = a[0] + b[0];
        ll hi = a[n - 1] + b[m - 1];
        ll ans = -1;
        while (lo <= hi)
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