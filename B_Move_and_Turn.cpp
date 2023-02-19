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

int main()
{
    fast;
    ll n;
    cin >> n;
    if(n%2==0)
    {
        cout << ((n / 2) + 1)*((n / 2) + 1) << endl;
    }
    else
    {
        ll k = n / 2;
        cout << ((k + 1) * (k + 2))* 2 << endl;
    }
}