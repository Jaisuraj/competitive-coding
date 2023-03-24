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
vector<ll> a,b,c;

int main()
{
    ll n;
    cin>>n;
    a.resize(n);
    b.resize(n);
    for (ll i = 0; i < n;i++)
    {
        cin >> a[i];
    }
    ll r;
    cin>>r;
    ll k = 0;
    for (ll i = 0; i < n; i++)
    {
        b[(i + r) % n] = a[i];
    }
    for (ll i = 0; i < n;i++)
    {
        cout<<b[i]<<" ";
    }

}