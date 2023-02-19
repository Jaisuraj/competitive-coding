#include<iostream>
#include <map>
#include <vector>
using namespace std;

typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

int main()
{
    fast;
    ll t, n;
    cin >> t;
    for (ll k = 0; k < t; k++)
    {
    cin >> n;
    string s;
    cin >> s;
    ll cnt = 0;
        for (ll i = 0; i < s.size()-1; i++)
        {
            if(s[i]=='0')
            {
                if(s[i+1]=='0')cnt+=2;
                else if(s[i+2]=='0')cnt+=1;
            }
        }
        cout << cnt << endl;
    }
}