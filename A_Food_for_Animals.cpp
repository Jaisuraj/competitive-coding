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
        ll a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;
        ll d = x - a;
        ll d2 = y - b;
        if(d>0&&d2>0)
        {
            if(d+d2>c)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
        else if(d>0)
        {
            if(d>c)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
        else if(d2>0)
        {
            if(d2>c)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
}