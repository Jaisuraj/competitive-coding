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
    getline(cin, s);
    vector<string> st;
    string k = "";
    ll ans = 999, ind;
    for (ll i = 0; i < s.length(); i++)
    {
        if(s[i]!=' ')
        {
            k = k + s[i];
        }
        else
        {
            st.push_back(k);
            k = "";
        }
    }
    st.push_back(k);
    for (ll i = 0; i < st.size();i++)
    {
        if(st[i].length()<ans)
        {
            ind = i;
            ans=st[i].length();
        }
    }
    cout << st[ind] << endl;
}