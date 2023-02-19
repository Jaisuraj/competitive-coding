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
    string s,k="";
    cin>>s;
    if(s[0]>=97)
        s[0] = s[0] - 32;
    k = k + s[0];
    for (ll i = 1; i < s.length(); i++)
    {
        k = k + s[i];
    }
    cout << k << endl;
}