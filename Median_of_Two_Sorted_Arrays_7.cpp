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
    cin >> m;
    a.resize(m);
    for (ll i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    cin >> n;
    b.resize(n);
    for (ll i = 0; i < n;i++)
    {
        cin >> b[i];
    }
    ll mid = (n + m) / 2;
    
}