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
    ll n, k,ans,max=1e9;
    cin >> n >> k;
    ll v[n],s=0;
    for (ll i = 0; i < n;i++)
    {
        cin >> v[i];
    }
    for (ll i = 0; i < n;i++)
    {
        s = s + v[i];
        if(i+1>=k)
        {
            if (max > s)
            {
                max=s;
                ans = i -k+2;
            }
            s = s - v[i + 1 - k];
        }
    }
    cout << ans;
}