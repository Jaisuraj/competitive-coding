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
        ll n, x;
        cin >> n >> x;
        ll d = n - x;
        if(d>0)
        {
            double k = ceil((double)d / 4);
            cout << k << endl;
        }
        else{
            cout << 0 << endl;
        }
    }
}