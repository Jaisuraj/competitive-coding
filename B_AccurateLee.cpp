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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        string s;
        cin >> n >> s;
        string k = s;
        sort(s.begin(), s.end());
        cout << s << endl;
    }
}