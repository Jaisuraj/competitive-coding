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
    ll n;
    cin >> n;
    map<string, ll> mp;
    string s[100];
    for (ll i = 0; i < n;i++)
    {
        cin >> s[i];
        mp[s[i]]++;
    }
    string ans;
    ll c = 0;
    for (ll i = 0; i < n; i++)
    {
        if(mp[s[i]]>c)
        {
            c = mp[s[i]];
            ans = s[i];
        }
    }
    cout << ans<<endl;
}