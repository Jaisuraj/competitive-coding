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
        string s;
        cin >> s;
        ll l = s.length();
        set<char> k;
        int c=0;
        for (ll i = 0; i < s.size(); i++)
        {
            k.insert(s[i]);
            if(k.size()>3)
            {
                c++;
                k.clear();
                k.insert(s[i]);
            }
        }

        if(k.empty()==false)
        {
            c++;
        }

        cout << c << endl;
    }
}
