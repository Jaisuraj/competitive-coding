#include<iostream>
#include <map>
#include <vector>
#include<algorithm>
#include<numeric>
#include<cmath>
#include<cstring>
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
    string k="hello";
    ll j = 0, p = 0;
    for (ll i = 0;i<s.length();i++)
    {
        if(s[i]==k[j])
        {
            j++;
            p++;
        }
    }
    if(p==5)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}