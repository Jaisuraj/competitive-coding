#include<iostream>
#include <map>
#include <vector>
#include<algorithm>
#include<numeric>
#include<cmath>
using namespace std;

typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

int main()
{
    fast;
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, k, ans = 0;
        cin >> n >> k;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if(k==1)
        {
            ans = (n - 1) / 2;
        }
        else
        {
        for (ll i = 1; i < n-1;i++)
        {
                if(a[i]>a[i-1]+a[i+1])
                {
                    ans++;
                }
                
        }
        }
        // for (ll i = 0; i < n;i++)
        // {
        //     cout << a[i]<<" ";
        // }
        // cout << endl;
        cout << ans << endl;
    }
}