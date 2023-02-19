#include<iostream>
#include <map>
#include <vector>
#include<algorithm>
#include<numeric>
#include<cmath>
#include<cstring>
using namespace std;

typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)


int main()
{
    fast;
    ll n,flag=1;
    string s;
    cin >> n;
    cin >> s;
    if(n<26)
        cout << "NO" << endl;
    else{
        map<char, ll> mp;
        string a = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        for (ll i = 0; i < 26; i++)
        {
            mp[a[i]]++;
        }
            for (ll i = 0; i < n; i++)
            {
                if (s[i] >= 97)
                {
                    s[i] = s[i] - 32;
                }
                mp[s[i]] = 0;
            }
        for (ll i = 0; i < 26; i++)
        {
            if(mp[a[i]]!=0)
            {
                    cout << "NO" << endl;
                    flag = 0;
                    break;
            }
        }
        if(flag==1)cout <<"YES"<< endl;
    }
}