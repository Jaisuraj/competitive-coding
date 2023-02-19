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
        ll m;
        ll temp,c=0;
        cin >> m;
        temp = m;
        while(temp>0)
        {
            temp = temp / 10;
            c++;
        }
        ll ans = 1;
        for (ll i = 1; i < c; i++)
        {
            ans = ans * 10;
        }
        cout << m - ans << endl;
    }
}