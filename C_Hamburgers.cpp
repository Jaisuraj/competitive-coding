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
typedef double lld;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

#define mod 1000000000+7
ll req[3];
ll nb, ns, nc,r1;
ll p[3];
bool check(ll x)
{
    ll r[3];
    for (ll i = 0; i < 3;i++)
    {
        r[i] = req[i] * x;
    }
    r[0] = r[0] - nb;
    r[1] = r[1] - ns;
    r[2] = r[2] - nc;
    ll cost = 0;
    for (ll i = 0; i < 3;i++)
    {
        if(r[i]>0)
        {
            cost += r[i] * p[i];
        }
    }
    if(cost<=r1)
        return true;
    return false;
}
int main()
{
    fast;
    string k;
    cin >> k;
    cin >> nb >> ns >> nc;
    cin >> p[0] >> p[1]>> p[2];
    cin >> r1;
    ll l = k.length();
    ll ans=-1;
    map<char, ll> mp;
    for (ll i = 0; i < l; i++)
    {
        mp[k[i]]++;
    }
    // if(nb%mp['B']==0&&ns%mp['S']==0&&nc%mp['C']==0)
    // {
    //     ans = min((nb / mp['B']), (ns / mp['S']), (nc / mp['C']));
    // }
    // cout << ans;
    req[0] = mp['B'];
    req[1] = mp['S'];
    req[2] = mp['C'];

    ll s = 0, e = 1e14, mid;
    while(s<=e)
    {
        mid = (s + e) / 2;
        if(check(mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    cout << ans << endl;
}