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
    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        vector<ll> a(n,0), b(n,0);
        for (ll i = 0; i < n;i++)
        {
            cin >> a[i];
        }
         for (ll i = 0; i < n;i++)
        {
            cin >> b[i];
        }
        vector<ll> ans(n+1, 0);
        for (ll i = 0; i < n; i++)
        {
            ans[i]=ans[i]+min(a[i], b[i]);
            a[i] = a[i] - min(a[i], b[i]);
            cout << ans[i] <<" ";
        }
        cout << endl
             << endl;
        ll k = 0;
        for (ll i = 0; i < n; i++)
        {
       for (ll j = i+1; j < n+1; j++)
        {
            cout << a[j-1] << "----" << b[j] << endl;
            cout << "Min:" <<min(a[j - 1], b[j])<< "Index= "<<j<<endl;
            ans[j] = ans[j] + min(a[j - 1], b[j]);
            a[j-1] = a[j-1] - min(a[j-1], b[j]);
            cout << "After: "<<a[j-1] << "----" << b[j] <<"Answer= "<<ans[j]<<endl;

            
        }
        cout << endl;
        }
            for (ll i = 0; i < n; i++)
            {
                //cout << a[i] << " " << ans[i] << endl;
            }
        cout << "NDKfnvejk" << endl;
    }
}