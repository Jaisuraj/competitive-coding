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


  
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, ne = 0, no = 0, f = 0;
        cin >> n;
        n = 2 * n;
        ll a[n];
        vector<ll> v,v1;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i]%2==0)
            {
                ne++;
                if(a[i]!=0)v.push_back(a[i]);
            }
            else
                no++;
        }
        if (no == ne)
        {
            cout << 0 << endl;
        }
        else if(no>ne)
        {
            cout << no - n/ 2;
        }
        else
        {
            ll diff = ne - n/2;
            for (ll i = 0; i < n; i++)
            {
                ll j = 0;
                ll temp = a[i];
                if(temp%2!=0)
                    continue;
                while (temp % 2 == 0)
                {
                    temp = temp / 2;
                    j++;
                }
                v1.push_back(j);
            }
            sort(v1.begin(), v1.end());
            ll ans = 0;
            for (ll i = 0; i < ne - n/2; i++)
            {
                ans = ans + v1[i];
            }
                cout << ans << endl;
        }
    }
}