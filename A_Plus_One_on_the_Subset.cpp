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
        ll s = 0, n;
        cin>>n;
        ll a[n];
        vector<ll> v;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        cout << a[n - 1] - a[0] << endl;
    }
}