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
        string s;
        cin >> n >> s;
        string k = s;
        ll y=0, x=0;
        for (ll i = 0; i < n; i++)
        {
            if(s[i]=='0')
            {
                x++;
            }
            if(s[i]=='1')
            {
                break;
            }
        }
        for (ll i = n-1; i>=0; i--)
        {
            if(s[i]=='1')
            {
                y++;
            }
            if(s[i]=='0')
            {
                break;
            }
        }
        //cout << x+1 << " " << y << endl;
        if(x+1+y>n)
        {
            cout << s << endl;
        }
        else
        {
            while(x-->=0)
                cout << '0';
            while(y-->0)cout << '1';
            cout << endl;
        }
    }
}