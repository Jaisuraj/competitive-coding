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
    int needed = 1,y;
    y = v[0] + x;

    for (ll i = 1; i < n; i++)
    {
        if(v[i]>=y)
        {
            needed++;
            y = v[i] + x;
        }

    }
    return needed>=k;
}

int main(){
    fast;
    ll t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        v.resize(n);
        for (ll i = 0; i < n;i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        ll lo = 0, hi = v[n-1]-v[0], ans = -1;
        while (lo <= hi)
        {
            ll mid = (hi + lo) / 2;
            if(check(mid))
            {
                
                lo = mid + 1;
                ans = mid;
            }
            else
            {
                
                hi = mid - 1;
            }
        }
        cout << ans << endl;
    }
}