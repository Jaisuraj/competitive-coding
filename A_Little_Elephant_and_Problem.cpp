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
typedef double lld;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

#define mod 1000000000+7

int main()
{
    fast;
    ll n;
    cin >> n;
    ll a[n], e[n], c = 0;
    if(n>2)
    {
    for (ll i = 0; i < n;i++)
    {
        cin >> a[i];
        e[i] = a[i];
    }
    sort(e, e + n);
    for (ll i = 0; i < n;i++)
    {
        cin >> a[i];
        e[i] = e[i]-a[i];
    }
    for (ll i = 0; i < n;i++)
    {
        if(e[i]!=0)
        {
            c++;
        }
    }
    if(c<=2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}