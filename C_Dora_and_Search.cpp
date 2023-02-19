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
    while(t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        ll f = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i]>n)
                f = -1;
        }
        if(n<=3||f==-1)
        {
            cout << -1 << endl;
        }
        else{
            ll mi = 1,mx=n;
            ll i = 0;
            ll j = n-1;
            while(i<=j)
            {
                if(a[i]==mi)
                {
                    i++;
                    mi++;
                }
                else if(a[i]==mx)
                {
                    i++;
                    mx--;
                }
                if(a[j]==mi)
                {
                    cout << a[j] << "nle";
                    j--;
                    mi = mi+1;
                    
                    // cout << mi << endl;
                }
                if(a[j]==mx)
                {
                    j--;
                    mx = mx - 1;
                }
                else
                {
                    cout << i + 1 << " " << j + 1 << endl;
                    f = 0;
                    break;
                }
            }
            }
            if(f!=0)
            cout << -1 << endl;
        }

}
