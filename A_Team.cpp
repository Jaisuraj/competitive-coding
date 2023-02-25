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


int main()
{
    fast;
    ll n;
    cin >> n;
    ll a[n][3];
    ll r = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i][0]>>a[i][1]>>a[i][2];
        if(a[i][0]+a[i][1]+a[i][2]>=2)
            r++;
    }
    cout << r << endl;
}