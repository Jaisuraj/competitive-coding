#include<iostream>
#include <map>
#include <vector>
#include<algorithm>
#include<numeric>
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
    cin >> t;
    while(t--)
    {
        ll n,f=0;
        cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n;i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end(),greater<ll>());
        ll temp;
        if (n % 2 != 0)
        {
            temp = (ll)(n / 2);
        }
         else
            {
            temp = (ll)((n - 1) / 2);
            }
        ll s1=0;
        ll s2 = v[n-1];
        ll t2 = n - 2;
        for (ll i = 0; i <= temp - 1; i++)
        {
            

            s1 += v[i];
            s2 += v[t2];
            --t2;

            if (s1 > s2 &&  s2>=0)
            {
                cout << "YES" << endl;
                f = 1;
                break;
           }

        }
            if(f==0)
            {
                cout << "NO" << endl;
            
            }
    }
}