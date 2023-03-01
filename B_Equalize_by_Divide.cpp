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

const ll N = 1000000000000L;
vector<pair<ll, ll>> p;

unordered_set<ll> cubes;

int main()
{
    fast;
    ll t;
    cin >> t;
    while (t--)
    {
        ll f = 0, k = 0;
        cin >> n;
        ll x;
        for (ll i = 0; i < n; i++)
        {
            cin >> x;
            p.push_back({x, i + 1});
            if(x==1)
                f++;
            else
                k++;
        }
        if(f&&k)
            cout << -1 << endl;
        else if(f||n==1)
            cout << 0 << endl;
        else
        {
            sort(p.begin(), p.end());
            if(p[0].first==p.back().first)
            {
                cout << 0 << endl;
            }
            else{
                vector<pair<ll, ll>> v;
                set<pair<ll, ll>> st;
                for(auto &i:p)st.insert(i);
                cout << st.size() << endl;
                set<pair<ll,ll>>::iterator itr;
                for (itr = st.begin();itr != st.end(); itr++)
                {
                    cout << itr->first << " " << itr->second << endl;
                    
                }
            }
        }
    }
}