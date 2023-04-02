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
#include<climits>
using namespace std;

typedef int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

ll n,k,m;
string s;
//const ll N = 1000000000000L;
const ll INF = 1;
vector<double> a,b;
vector<vector<ll>> v;
map<char, ll> mp;

double f(vector<double> a1,vector<double>b1)
{
    n = a1.size();
    m = b1.size();
    if(n>m)
    {
        return f(b, a);
    }
    
    ll lo = 0, hi = n, tot = (n + m + 1) / 2;
    while(lo<=hi)
    {
        ll mid = (lo + hi) / 2;
        ll las = mid;
        ll lab = tot - mid;
        ll la = (las > 0) ? a1[las - 1] : INT_MIN;
        ll lb = (lab>0)?b1[lab - 1]:INT_MIN;
        ll ra = (la<n)?a1[las]:INT_MAX;
        ll rb = (lb < m) ? b1[lab] : INT_MAX;
        if (la <= rb and lb <= ra)
        {
            if((m+n)%2==0)
            {
                return (max(la, lb) + min(ra, rb)) / 2.0;
            }
            return max(la,lb);
        }
        else if(la>rb)
        {
            hi = mid - 1;
        }
        else
            lo = mid + 1;
    }
    return 0.0;
}

int main()
{
    cin >> n;
    a.resize(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> m;
    b.resize(m);
    for (ll i = 0; i < m;i++)
    {
        cin >> b[i];
    }
    cout <<fixed<<setprecision(1)<<(double)f(a, b) << endl;
}