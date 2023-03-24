#include<iostream>
#include <map>
#include <vector>
#include<algorithm>
#include<numeric>
#include<cmath>
#include<cstring>
#include<iomanip>
#include<set>
#include<unordered_set>
using namespace std;

typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

ll n,k,m;
string s;
const ll N = 1000000000000L;
const ll INF = 1;
vector<ll> a,b;
vector<vector<ll>> v;
map<char, ll> mp;

int main()
{
    ll n;
    string s;
    cin>>s;
    n = s.length();
    ll f = 0;
    for (ll i = 0; i < n - 1; i++)
    {
        if(abs(s[i]-s[i+1])>1)
        {
            f = -1;
        }
    }
    if(f==-1)
        cout << "false" << endl;
    else
        cout << "true" << endl;
}