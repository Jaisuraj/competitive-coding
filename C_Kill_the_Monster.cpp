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

int main()
{
    fast;
    ll t;
    cin >> t;
    while (t--)
    {
        ll hc, dc, hm, dm, k, w, a;
        bool f = false;
        cin >> hc >> dc;
        cin >> hm >> dm;
        cin >> k >> w >> a;
        for (ll i = 0; i <= k;i++)
        {
            ll nh = hc + (i * a);
            ll na = dc + ((k - i) * w);
            ll tf, ti;
            if (nh % dm == 0)
                tf=nh/dm;
            else
                tf = (nh / dm) + 1;
            if (hm % na == 0)
                ti=hm/na;
            else ti = hm / na + 1;
            if(ti<=tf)
            {
                f = true;
                break;
            }
        }
            if (f)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
    }
}