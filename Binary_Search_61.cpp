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
    cin>>n;
    a.resize(n);
    for (ll i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    ll x;
    cin>>x;
    ll lo = 0, hi = n - 1, ans = -1;
    while(lo<=hi)
    {
        ll mid = (lo + hi) / 2;
            if(a[mid]>x)
            {
                hi = mid - 1;
            }
            else
            {
                lo = mid + 1;
            }
        
    }
    if(a[lo]==x)cout << lo << endl;
    else if(a[hi]==x)
            cout << hi << endl;
    else
            cout << -1 << endl;
    
}