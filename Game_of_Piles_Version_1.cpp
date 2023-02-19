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
        ll n,s=0,c=0;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n;i++)
        {
            cin >> a[i];
            s = s + a[i];
            if(a[i]==1)
            {
                c++;
            }
        }
        if(c>0)
            cout << "CHEF" << endl;
        else
        {
            if(s%2!=0)cout << "CHEF" << endl;
            else cout << "CHEFINA" << endl;
        }
    }
}