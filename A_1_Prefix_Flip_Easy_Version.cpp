#include<iostream>
#include <map>
#include <vector>
#include<algorithm>
#include<numeric>
#include<cmath>
#include<cstring>
#include<iomanip>
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
    cin>>t;
    while(t--)
    {
        ll n;
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        if(s1==s2)
            cout << 0 << endl;
        else 
        {
            vector<ll> v;
            for (ll i = 0; i < n; i++)
            {
                if(s1[i]!=s2[i])
                {
                    if(i>0)
                        v.push_back(i + 1);
                    v.push_back(1);
                    if(i>0)
                        v.push_back(i + 1);
                }
            }
            cout << v.size() << " ";
            for(ll x : v) {
            cout << x << ' ';
        }
        cout << endl;
        }
    }
}