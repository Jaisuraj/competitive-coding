#include<iostream>
#include <map>
#include <vector>
#include<algorithm>
#include<numeric>
#include<cmath>
#include<cstring>
using namespace std;

typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)


int main()
{
    fast;
    ll s, n,f=0;
    cin >> s >> n;
    vector<pair<ll, ll>> x(n);
    for (ll i = 0; i < n; i++)
    {
        cin>>x[i].first>>x[i].second;
    }
    sort(x.begin(), x.end());
    for (ll i = 0; i < n; i++)
    {
        if(s>x[i].first)
        {
            s = s + x[i].second;
        }
        else
        {
            cout << "NO" << endl;
            f = -1;
            break;
        }
    }
    if(f!=-1)
        cout << "YES" << endl;
}