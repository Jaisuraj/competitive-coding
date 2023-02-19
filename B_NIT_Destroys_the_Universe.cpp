#include<iostream>
#include <map>
#include <vector>
#include<algorithm>
#include<numeric>
#include<cmath>
using namespace std;

typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

ll min(ll a,ll b)
{
    if (a<b)
        return a;
    return b;
}
int main()
{
    fast;
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,ans=0,l=0,k=1;
        cin >> n;
        ll a[n],t[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            
        }
        t[k - 1] = a[0];
        for (ll i = 1; i < n; i++)
        {
            if(t[k-1]!=a[i])
            {
                t[k] = a[i];
                k++;
            }
        }     
        if(k==1&&t[k-1]==0||n==0)
            cout << 0 << endl;
        else
            {
        for (ll i = 0; i < k; i++)
        {
            if (t[i] == 0)
                l++;
        }
        if ((t[k - 1] == 0 && t[0] == 0))
            l--;
        if (l == 0)
            cout << 1 << endl;
        else if(t[0]!=0&&t[k-1]!=0)
        {
            cout << min(l+1,2)<<endl;

        }
        else cout << min(l,2) << endl;
        
    }
    }
}