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
    ll t;
    cin>>t;
    while(t--)
    {
        ll x;
        cin >> x;
        if(x%2==0)
        {
            cout << -1 << endl;
        }
        else
        {
        ll f = 0;
        for(ll i = 29;i >= 1;i--) {
        if((x >> i) & 1) {
            f = 1;
            a.push_back(2);
        }
        else if(f) {
            a.push_back(1);
        }
        
        }
        cout << a.size()<<endl;
        for (auto i : a)
        {
            cout << i << " ";
        }
        cout << endl;
        }
        a.clear();
    }
}