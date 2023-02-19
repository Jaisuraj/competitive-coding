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

int main()
{
    fast;
    ll t;
    cin >> t;
    while (t--)
    {
        string k;
        cin >> k;
        ll l = k.length();
        ll co = 0, cz = 0;
        for (ll i = 0; i < l; i++)
        {
            if(k[i]=='1')
                co++;
                else
                    cz++;
        }
        if(co==cz)
            cout <<co-1<< endl;
        else{
            ll ans;
            ans = (cz < co) ? cz : co;
            cout << ans << endl;
        }
    }
}