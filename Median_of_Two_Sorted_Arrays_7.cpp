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
    if(mid%2!=0)
    {
    if(mid>=m)
    {
        cout << b[mid - m] << endl;
    }
    
    else
    {
        cout << fixed<<setprecision(1)<<(double)a[mid] << endl;
    }
    }
    else
    {
    ll mid1 = mid -1;
    if(mid>=m&&mid1>=m)
    {
        cout << (b[mid - m]+b[mid1-m])/2 << endl;
    }
    else if(mid>=m&&mid1<m)
    {
        cout << fixed<<setprecision(1)<<(double)((double)b[mid - m]+(double)a[mid1])/2 << endl;
        
    }

    else
    {
        cout << fixed<<setprecision(1)<<(a[mid]+a[mid1])/2 << endl;
    }

    }
}