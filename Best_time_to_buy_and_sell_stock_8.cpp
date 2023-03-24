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

int main()
{
    ll n;
    cin>>n;
    a.resize(n);
    for (ll i = 0; i < n;i++)
    {
        cin >> a[i];
    }
    ll d = 0;
    for (ll i = 0; i < n - 1; i++)
    {
        for (ll j = i + 1; j < n;j++)
        {
            d= max(d,a[j]-a[i]);
        }
    }
    cout << d << endl;
}