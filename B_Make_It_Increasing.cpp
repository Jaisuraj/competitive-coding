#include<iostream>
#include <map>
#include <vector>
#include<algorithm>
#include<numeric>
#include<cmath>
#include<set>
#include<unordered_set>
using namespace std;

typedef long long int ll ;
typedef long double lld;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

#define mod 1000000000+7

int main()
{
    fast;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n,c=0;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n;i++)
        {
            cin >> a[i];
        }
        for (ll i = 0; i < n;i++)
        {
            if(i==0)
            {
                if(a[i]>=a[i+1])
                {
                    a[i] = a[i] / 2;
                    c++;
                }
            }
            else if(i==(n-1))
            {
                if(a[i-1]>=a[i])
                {
                    a[i - 1] = a[i - 1] / 2;
                    c++;
                }
                
            }
            else
            {
                if(a[i]>=a[i+1])
                {
                    a[i] = a[i] / 2;
                    c++;
                }
                if(a[i-1]>=a[i])
                {
                    a[i-1]=a[i - 1] / 2;
                    c++;
                }
            }
        }
        for (ll i = 0; i < n;i++)
        {

            cout << a[i] << " ";
        }
        cout << endl
             << c << endl;
        ;
    }
}