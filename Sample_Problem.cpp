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
        ll n, m;
        cin >> n >> m;
        vector<ll>v(n);
        cout << "Case #" << tt << ": ";
        ll s = 0,t;
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            s = s + v[i];
        }
        t = (((s / m)));
        cout << s-t*m;
        cout << endl;
    }
}