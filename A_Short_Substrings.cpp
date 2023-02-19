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
    ll t;
    cin >> t;
    while(t--)
    {
        string s;
        cin>>s;
        for(ll i = 0;i<s.length();i++)
        {
            if(i%2==0&&i!=0)
            {
                continue;
            }
            else
                cout << s[i];
        }
        cout << endl;
    }
}