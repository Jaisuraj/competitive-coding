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
map<ll, ll> mp;


int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        cin >> m;
        vector<vector<ll>> v(m);
        for (ll i = 0; i < m;i++)
        {
            ll n;
            cin >> n;
            for (ll j = 0; j < n;j++)
            {
                ll k;
                cin >> k;
                v[i].push_back(k);
            }
        }
        map<ll, ll> tr;
        for (ll i = m - 1; i >= 0; i--)
        {
            bool ff = false;
            for(auto x:v[i])
            {
                if(!ff&&!tr[x])
                {
                    ff = true;
                    a.push_back(x);
                    tr[x]++;
                }
                else{
                    tr[x]++;
                }
            }
            
        }
        if(a.size()==m)
            {
                for (ll i = m - 1; i >= 0;i--)
                {
                    cout << a[i] << " ";
                }
                cout << endl;
            }
            else{
                cout << -1 << endl;
            }
            a.clear();
    }
}