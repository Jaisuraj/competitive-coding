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
    while(t--)
    {
        cin >> n;
        a.resize(n);
        b.resize(n);
        for (ll i = 0; i < n;i++)
        {
            cin >> a[i];
        }
        for (ll i = 0; i < n;i++)
        {
            cin >> b[i];
        }
        ll a1 = max(b[n - 1], a[n - 1]);
        ll a2 = min(b[n - 1], a[n - 1]);
        ll flag = 0;
        for (ll i = 0; i < n; i++)
        {
            ll f1 = max(a[i], b[i]);
            ll f2 = min(a[i], b[i]);
            if(f1>a1||f2>a2)
            {
                flag = -1;
                break;
            }
        }
        (flag == -1) ? cout << "No" << endl : cout << "Yes" << endl;
    }
}