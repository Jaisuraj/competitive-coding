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
    ll n, m;
    cin>>n>>m;
    map<string, string> mp;
    string s1, s2;
    for (ll i = 0;i<m;i++)
    {
        cin >> s1 >> s2;
        if(s1.length()<=s2.length())
            mp[s1] = s1;
        else
            mp[s1] = s2;
    }
    for (ll i = 0; i < n;i++)
    {
        string s1;
        cin >> s1;
        cout << mp[s1] << " ";
    }
}