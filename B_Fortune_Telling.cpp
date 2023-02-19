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
    fast;
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, x, y;
        cin >> n >> x >> y;
        ll a[n];
            for (int i = 1; i <= n; ++i)
            {
                cin >> a[i];
                x ^= a[i];
            }
            if ((x & 1) == (y & 1))
                cout << "Alice" << endl;
            else
                cout << "Bob" << endl;
    }
}