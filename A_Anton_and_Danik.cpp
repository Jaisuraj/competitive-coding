#include<iostream>
#include <map>
#include <vector>
#include<algorithm>
#include<numeric>
#include<cmath>
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
    ll n,a=0,d=0;
    cin >>n>>s;
    for (ll i = 0; i < n;i++)
    {
        if(s[i]=='A')
            a++;
        else
            d++;
    }
    if(a>d)cout << "Anton";
    else if (d > a) cout << "Danik";
    else
        cout << "Friendship";
}