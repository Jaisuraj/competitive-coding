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
    string s;
    cin>>s;
    ll l = s.length();
    map<char, ll> mp;
    ll c;
    c = s[l - 1] - '0';
    if(c%2==0)
        cout << s << endl;
    else
    {
    for (ll i = 0; i < l; i++)
    {
        c = s[i] - '0';
        if(c%2==0)
        {
            cout << i << endl;
        }

    }
    //cout <<c<< endl;
    }
}