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
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll f = 0,ans=0;
        map<char, ll> mp;
        ll l = s.length();
        for (ll i = 0; i < l;i++)
        {
            mp[s[i]]++;
        }
        ans = min(mp['0'], mp['1']);
        ll k1 = 0, k2 = 0;
        for (ll i = 0; i < l;i++)
        {
            if(s[i]=='0')
            {
                k1++;
                mp[s[i]]--;
            }
            else
            {
                k2++;
                mp[s[i]]--;

            }
            ans = min(ans, mp['1'] + k1);
            ans = min(ans, mp['0'] + k2);
        }
        cout << ans << endl;
    }
}