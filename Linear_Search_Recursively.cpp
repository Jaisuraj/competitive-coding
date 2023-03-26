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
#include<unordered_map>
using namespace std;

typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

ll n,k,m;
string s,s1;
const ll N = 1000000000000L;
const ll INF = 1;
vector<ll> a,b;
vector<vector<ll>> v;



ll lin(ll x,ll n1)
{
    if(n1==n)
        return -1;
    if(x==a[n1])
    {
        return 1;
    }
    ll f= lin(x, n1 + 1);
    return f;
}
int main()
{
    cin>>n;
    a.resize(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll x;
    cin >> x;
    ll f = lin(x,0);
    (f == -1) ? cout << "false" : cout << "true";
}