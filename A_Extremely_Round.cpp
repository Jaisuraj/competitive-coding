#include<iostream>
#include <vector>
#include <map>
#include <numeric>
#include<algorithm>
#include<set>
using namespace std;

typedef long long int ll;
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
        ll n;
        cin >> n;
        ll tp = n;
        ll c = -1;
        while (tp > 0)
        {
            tp = tp / 10;
            c++;
        }
        ll k = 1;
        for (int i = 0; i < c; i++)
        {
            k = k * 10;
        }
        cout << 9 * c + n / k << endl;
    }
}