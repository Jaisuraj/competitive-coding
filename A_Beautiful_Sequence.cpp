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
    ll t;
    cin>>t;
    ll f;
    while (t--)
    {
        f = 0;
        cin >> n;
        a.resize(n);
        for (ll i = 0;i<n;i++)
        {
            cin >> a[i];
        }
        for (ll i = 0;i<n;i++)
        {
            if(a[i]<=i+1)
            {
                f = 1;
            }
        }
        (f == 0) ? cout << "NO" << endl : cout << "YES" << endl;
    }
}