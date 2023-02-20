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
    ll x,j;
    for (ll i = 1; i <= n; i++)
    {
        cin >> x;
        ll s = sqrt(x);
        for (j = 2; j * j <= s; j++)
            if (s % j == 0)
                break;
        if ((j*j)> s and s * s == x and x > 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}