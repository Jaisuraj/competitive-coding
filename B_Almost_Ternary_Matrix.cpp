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
        ll n,m;
        cin >> n>>m;
        ll a[n][m];
        ll b,c;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m;j++)
            {
                ll k = (i + j) / 2;
                if(i%2==0&&j%2==0)
                {
                    b = 0;
                }
                else{
                    b = 1;
                }
                if(k%2==0)
                {
                    c = 1;
                }
                else
                {
                    c = 0;
                }
                a[i][j] = (b - c) * (b - c);
            }
        }
        for (ll i = 0; i < n;i++)
        {
            for (ll j = 0; j < m;j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
}