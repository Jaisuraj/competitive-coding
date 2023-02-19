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

#define mod 1000000009

int main()
{
    fast;
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll c = 1;
        vector<ll> v;
        while(n>0)
        {
            ll r = n % 10;
            n = n / 10;
            if (r == 0)
            {
                c = c * 10;
                continue;
            }
                else
                {
                    v.push_back(r * c);
                    c = c * 10;
            }
        }
        cout << v.size() << endl;
        for (ll i = v.size() - 1; i >= 0; i--)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
}