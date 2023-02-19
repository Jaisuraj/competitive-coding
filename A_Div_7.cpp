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
        ll n;
        cin >> n;
        if(n%7==0)
            cout << n << endl;
        else
        {
            ll r = n % 10;
            ll k = 9 - r;
            int o = n, f = 0;
            while(k--)
            {
                n++;
                if(n%7==0)
                {
                    f = 1;
                    break;
                }
            }
            if(f)
            {
                cout << n<<endl;
            }
            else
            {
                while(r--)
                {
                o--;
                if(o%7==0)
                {
                    break;
                }
            }

            cout << o << endl;
            }
        }
    }
}