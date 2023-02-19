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
    ll n;
    cin >> n;
    map<string, ll> mp;
    while (n--)
    {
        string s;
        cin>>s;
        if(mp[s]==0)
        {
            cout << "OK" << endl;
            mp[s]++;
        }
        else
        {
            string k = to_string(mp[s]);
            cout<<s + k<<endl;
            mp[s]++;
        }
    }
}