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


  
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,s=0;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n;i++)
        {
            cin >> a[i];
            s = s + a[i];
        }
        ll k = s / (n + 1);
        for (ll i = 0; i < n;i++)
        {
            cout << a[i] - k << " ";
        }
        cout << endl;
    }
}