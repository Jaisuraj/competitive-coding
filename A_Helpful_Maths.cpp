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
    string s,k="";
    cin>>s;
    ll n = s.length();
    map<char, ll> mp;
    for (ll i = 0; i < n;i++)
    {
        mp[s[i]]++;
    }
    while(mp['1']!=0)
    {
        k = k+"1+";
        mp['1']--;
    }
    while(mp['2']!=0)
    {
        k = k+"2+";
        mp['2']--;
    }
    while(mp['3']!=0)
    {
        k = k+"3+";
        mp['3']--;
    }
    k = k.substr(0, k.length() - 1);
    cout << k << endl;
}