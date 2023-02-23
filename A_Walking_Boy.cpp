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


int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x,f=0;
        cin>>n;
        vector<ll> v;
        for (ll i = 0; i < n; i++)
        {
            cin >> x;
            v.push_back(x);
        }
        for (ll i = 1;i<n;i++)
        {
            //cout << v[i] << "-" << v[i - 1] << "=" << v[i] - v[i - 1] << endl;
            if (v[i] - v[i - 1] >= 120)
            {
                f = f + (v[i] - v[i - 1]) / 120;
            }
            if(f>=2)
            {
                break;
            }
        }
        if(f>=2)
            cout << "YES" << endl;
        else if(1440-v[n-1]>=120)
        {
            f = f + (1440 - v[n - 1]) / 120;
            f = f + (v[0]) / 120;
            if(f>=2)
            cout << "YES" << endl;
            else
            cout << "NO" << endl;
        }
        else
            cout << "NO" << endl;
    }
}