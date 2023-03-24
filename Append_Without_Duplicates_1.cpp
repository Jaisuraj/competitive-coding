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
map<ll, ll> mp;

bool check(int x)
{
    return a[x] < a[x - 1];
}
int main()
{
    while(1)
    {
    cin >> n;
    if(n==-1)
        break;
    if(mp[n]>0)
        continue;
    else 
    {
        a.push_back(n);
        mp[n]++;
    }
    }
    ll x = a.size();
    for (ll i = 0; i < x;i++)
    {
    cout << a[i] << " ";
    }
}