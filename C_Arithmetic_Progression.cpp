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
    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n;i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    if(n==1)
        cout << -1 << endl;
    else{
        
    }
}