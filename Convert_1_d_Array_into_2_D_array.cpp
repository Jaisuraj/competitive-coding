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
    ll n1;
    cin >> n1;
    a.resize(n1);
    for (ll i = 0; i < n1; i++)
    {
        cin >> a[i];
    }
    cin >> m >> n;
    k = 0;
    for (ll i = 0; i < m; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            cout << a[k++] << " ";
        }
        cout << endl;
    }
}