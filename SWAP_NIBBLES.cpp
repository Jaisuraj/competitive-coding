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


string decimalToBinary(ll n1)
{
    string s = bitset<64> (n1).to_string();
    const auto loc1 = s.find('1');
    if(loc1 != string::npos)
        return s.substr(loc1);

    return "0";
}
int main()
{
    ll n1;
    ll t;
    cin >> t;
    while (t--)
    {
    cin >> n1;
    string s1 = decimalToBinary(n1);
    ll l1 = s1.length();
    l1 = 8 - l1;
    while(l1--)
    {
        s1 = "0" + s1;
    }
    string k = "";

    for (ll i = 0; i < 4; i++)
    {
        k = s1[8 - 1 - i]+k;
        
    }
    s1 = k + s1;
    ll nn = s1.length();
    string f = "";
    for (ll i = 0; i < 8; i++)
    {
        f = f + s1[i];
    }
    ll ii = stoi(f, nullptr, 2);
    cout << ii << endl;
    }
}