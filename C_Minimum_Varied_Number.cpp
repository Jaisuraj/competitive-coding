#include<iostream>
#include <vector>
#include <map>
#include <numeric>
#include<algorithm>
#include<set>
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
        ll n;
        vector<ll> v;
        cin >> n;
        ll temp = n;
        int f = 9;
        while(n)
        {
            if(n>f)
            {
                v.push_back(f);
                n = n - f;
                f--;
            }
            else{
                v.push_back(n);
                n = 0;
            }
        }
        int res = 0;
        for (ll i = v.size() - 1; i >= 0; i--)
        {
            res = res * 10 + v[i];
        }
        cout << res << endl;
    }
}