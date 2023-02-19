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
        ll n;
        cin >> n;
        ll a, b, c;
        if((n&1)!=0)
        {
            cout << -1 << endl;
        }
        else
        {
            n = n / 2;
            a = 1;
            b = 1;
            c = n ^ a;
            cout << a << " " << b << " "<<c << endl;
        }
    }
}