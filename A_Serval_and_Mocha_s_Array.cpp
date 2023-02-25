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

int gcd(ll a,ll b){
	return b?gcd(b,a%b):a;
}

int main()
{
    fast;
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,f=0;
        cin>>n;
        vector<ll>a(n+1),v;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (ll i = 0; i < n;i++)
        {
            for (ll j = i + 1; j < n;j++)
            {
                if(gcd(a[i],a[j])<=2)
                {
                    f = -1;
                }
                
            }
        }
        if(f==-1)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}
