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
    ll t;
    cin>>t;
    while(t--) 
    {
        string s;
        int p, n, x=0;
        cin >> s >> p;
        string k=s;
        n=s.length();
        sort(k.begin(),k.end());
        map<char, int> mp, mp1;
        for (ll i = 0; i < n;i++)
        {
            ll d = 'a' -1;
            x=x+s[i]-d;
        }
        while (x>p)
        {
            ll d = 'a' -1;
            x =x-k.back()+d;
            mp[k.back()]++;
            k.pop_back();
        }
        for (ll i = 0; i < n;i++)
        {
            if(mp1[s[i]]>=mp[s[i]])
            {
                cout << s[i];
                continue;
            }
            mp1[s[i]]++;
        }
        cout  << endl;
    }
}