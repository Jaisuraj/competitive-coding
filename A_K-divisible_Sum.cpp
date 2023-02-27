#include<iostream>
#include <map>
#include <vector>
#include<algorithm>
#include<numeric>
#include<cmath>
#include<cstring>
#include<iomanip>
using namespace std;

typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

ll n,k;
vector<ll> prefix,v;
ll check(ll x)
{
    if(v[x]==v[x+1])
        return 0;
    return 1;
}
int main()
{
    fast;
    ll t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        ll cf= (n + k - 1) / k;
        k *= cf;
        cout << (k + n - 1) / n << endl;
    }
}