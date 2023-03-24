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

bool check(int x)
{
    return a[x]>a[n-1];
}
int main()
{
    cin>>n;
    a.resize(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll lo = 0,hi=n-1,ans=-1;
    while(lo<=hi)
    {
        ll mid = (lo + hi) / 2;
        if (check(mid))
        {
            lo = mid + 1;
                        

        }
        else
        {
            hi = mid - 1;
            ans = a[mid];
        }
    }
    cout << ans << endl;
}