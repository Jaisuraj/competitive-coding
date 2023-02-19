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
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n],c=0,k;
        map<ll, ll> mp;
        vector<ll> s;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        ll i = 0;
        while (mp.size() != n)
        {
            c++;
            mp[a[i]]--;
            if(mp[a[i]]==0)
                mp.erase(a[i]);
            i++;
            n--;
        }
        cout << c<< endl;
    }
}