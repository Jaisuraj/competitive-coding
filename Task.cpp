#include<iostream>
#include <map>
#include <vector>
#include<algorithm>
#include<numeric>
#include<cmath>
using namespace std;

typedef long long int ll;
typedef double lld;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

int main()
{
    fast;
    ll t;
    cin >> t;
    for (ll tt = 1; tt <=t;tt++)
    {
        ll n, x;
        cin >> n >> x;
        vector<pair<ll,ll>> v(n);
        cout << "Case #" << tt << ": ";
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i].first;
            v[i].second = i + 1;
            v[i].first = (ceil((double)v[i].first/x));;
        }
        ll c =0;
        sort(v.begin(), v.end());
        for (ll i = 0; i < n; i++)
        {
            cout << v[i].second<<" ";
        }
        cout << endl;
    }
}