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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, cz = 0, co = 0;
        cin >> n;
        string k;
        cin >> k;
        for (ll i = 0; i < n - 1; i++)
        {
            if(k[i]=='1'&&k[i]!=k[i+1])
            {
                co++;
            }
        }
        cout << co << endl;
    }
}