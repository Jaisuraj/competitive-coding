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
    string s;
    ll x;
    map<char, ll> mp;
    cin >> s;
    for (ll i = 0; i < s.length();i++)
    {
        if(mp[s[i]]>0)
            continue;
        else{

            mp[s[i]]++;
            x++;
        }
    }
        if (x % 2 == 0)
            cout << "CHAT WITH HER!";
        else
            cout << "IGNORE HIM!";
}