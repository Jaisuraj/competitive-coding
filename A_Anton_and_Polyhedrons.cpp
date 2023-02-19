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
    ll n;
    cin >> n;
    map<string, ll> mp;
    mp["Icosahedron"] = 20;
    mp["Cube"] = 6;
    mp["Tetrahedron"] = 4;
    mp["Dodecahedron"] = 12;
    mp["Octahedron"] = 8;
    ll res = 0;
    string s;
    for (ll i = 0; i < n; i++)
    {
        cin >> s;
        res += mp[s];
        }
        cout << res << endl;

}