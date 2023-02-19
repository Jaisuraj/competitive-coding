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
    cin >> s;
    ll lo=0, hi=0;
    for (ll i = 0; i < s.length();i++)
    {
        if(s[i]>=97)
            lo++;
            else
            hi++;
    }
    if(lo>=hi)
    {
        for (ll i = 0; i < s.length();i++)
    {
        if(s[i]<97)
            s[i] = s[i] + 32;
    }
    }
    else
    {

        for (ll i = 0; i < s.length();i++)
    {
        if(s[i]>=97)
            s[i] = s[i] - 32;
    }

    }
    cout << s<< endl;
}