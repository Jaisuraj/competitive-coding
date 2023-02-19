#include<iostream>
#include <map>
#include <vector>
#include<algorithm>
#include<numeric>
#include<cmath>
using namespace std;

typedef long long int ll;
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
    for (ll tt = 1; tt <=t;tt++)
    {
        ll n,nn,l,r,ans=0;
        cin >> n >> nn;
        string k;
        cin >> k;
        cout << "Case #" << tt << ": ";
        for (ll i = 0; i < nn; i++)
        {
            ll f = 0,c=0;
            cin >> l >> r;
                map<char, ll> mp;
                ll dif = l - r;
                for (ll ii = l - 1; ii < r;ii++)
                {
                    mp[k[ii]] = 0;
                }
                for (ll ii = l - 1; ii < r;ii++)
                {
                    mp[k[ii]]++;
                }
                for (ll ii = l - 1; ii < r;ii++)
                {
                    if(dif%2==0)
                    {
                    if (mp[k[ii]] % 2 != 0)
                    {
                        f = 1;
                    }
                    }
                    else
                    {
                        if(mp[k[ii]] % 2 != 0)
                            c++;
                    }
                }
                if(f==0||c==1)
                    ans++;
            }
        

        cout <<ans<< endl;
    }
}