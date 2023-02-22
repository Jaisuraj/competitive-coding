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


int main()
{
    fast;
    ll m;
    cin>>m;
    vector<ll> v;
    for (ll i = 0; i < m; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
        ll ans = 0;
        ll prefix = 0;

    for (ll i = 0; i < v.size(); ++i) {
        prefix += v[i];

        ll prefixAvg = ceil((double)prefix / (double)(i + 1));
        
        ans = max(ans, prefixAvg);
    }
    cout << ans<< endl;
}