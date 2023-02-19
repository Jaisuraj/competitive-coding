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
    string s1,s2;
    ll f = 0;
    cin >> s1 >> s2;
    for (ll i = 0; i < s1.length();i++)
    {
        if(s1[i]!=s2[s1.length()-1-i])
        {
            cout << "NO" << endl;
            f = -1;
            break;
        }
    }
    if(f!=-1)
        cout << "YES";
}