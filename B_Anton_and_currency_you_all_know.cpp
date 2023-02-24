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
    ll c, f=l;
    c = s[l - 1] - '0';
    for (ll i = 0; i < l; i++)
        if ((s[i] - '0') % 2 == 0)
        {
            f = i;
            if (s[l - 1] > s[i])
                break;
        }

    if (l== f)
        cout << -1 << endl;
    else
    {
        swap(s[f], s[l-1]);
        cout << s << endl;
    }
    
}