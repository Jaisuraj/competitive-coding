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
int main()
{
    getline(cin,s);
    vector<string> v;
    string k = "";
    n = s.length();
    for (ll i = 0; i < s.length(); i++)
    {
        if(s[i]!=' '&&i!=n-1)
        {
            k = s[i] + k;
        }
        else
        {
            if(i==n-1)
                k = s[i] + k;
            cout << k << " ";
            k = "";
        }
    }
}