#include<iostream>
#include <map>
#include <vector>
#include<algorithm>
#include<numeric>
#include<cmath>
#include<cstring>
#include<iomanip>
#include<set>
#include<unordered_set>
using namespace std;

typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

ll n,k,m;
string s;
const ll N = 1000000000000L;
const ll INF = 1;
vector<ll> a,b;
vector<vector<ll>> v;
map<char, ll> mp;

int main()
{
    string s;
    for (ll i = 0; i < 26;i++)
    {
        mp[(char)('a' + i)] = 0;
    }
    cin>>s;
    ll n = s.length();
    for (ll i = 0; i < n;i++)
    {
        mp[s[i]]++;
    }
    ll f = 0;
    for (ll i = 0; i < 26; i++)
    {
        if(mp[(char)('a' + i)] ==0)
        {
            f = -1;
            break;
        }
    }
    if(f==-1)
        cout << "false" << endl;
    else
        cout << "true" << endl;
}