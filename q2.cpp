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
    ll m,n;
    cin>>m;
    cin >> n;
    for (ll i = 0;i<m;i++)
    {
        for (ll j = 0; j < n;j++)
        {
            ll x;
            cin >> x;
            a.push_back(x);
        }
        v.push_back(a);
        a.clear();
    }
    ll k = 0,t=0;
    for (ll i = 0; i < n; i++)
    {
        if (k %2==0){
        for (ll j = 0;j<m;j++)
        {
            cout << v[j][i] << " ";
        }
        }
        else
        {
            for (ll j = m-1;j>=0;j--)
        {
            cout << v[j][i] << " ";
        }


        }
        k++;
    }
}