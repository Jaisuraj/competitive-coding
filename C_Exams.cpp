#include<iostream>
#include <vector>
#include <stack>
#include <numeric>
#include <algorithm>
using namespace std;

typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)



int main()
{
    fast;
    ll n,k;
    cin >> n;
    vector<pair<ll,ll> > a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    sort(a.begin(), a.end());
    k = a[0].second;
    for (ll i = 0; i < n-1; i++)
    {
        if(k<=a[i+1].second)
            k= a[i + 1].second;
        else
            k = a[i + 1].first;
    }
    cout << k;
}