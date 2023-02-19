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
        ll a[2][2],c=0,cr=0;
        for (ll i = 0; i < 2; i++)
        {
            for (ll j = 0; j < 2;j++)
            {
                cin >> a[i][j];
                if(a[i][j]==1)
                    c++;
            }
        }
        if(c==4)
            cout << 2 << endl;
        else if(c==0)
            cout << 0 << endl;
        else
            cout << 1 << endl;
        // ll k = (a[0][0] * a[1][1]) - (a[1][0] * a[0][1]);
        // cout << c << endl
        //      << endl;
        // if (c == 0)
        // {
        //     cout << 0 << endl;
        // }
        // else
        // {
        //     if((a[0][0]==1&&a[1][1]==1)&&a[1][0]==1&&a[0][1]==1)
        //     {
        //         cout << 2 << endl;
        //     }
        //     else{
        //         if(c>=3)
        //         cout << 2 << endl;
        //         else
        //             cout << 1 << endl;
        //     }
        // }
    }
}