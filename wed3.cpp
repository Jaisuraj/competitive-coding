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

using namespace std;

ll f(ll i, ll n1, ll count, vector<vector<long long int>> &dp)
{
    if (i == n1)
        return 1;
        
    if (dp[i][count] != -1)
        return dp[i][count];

    ll ans = 0;

    ans += 21 * f(i + 1, n1, count, dp);
    if (count != 0)
        ans += f(i + 1, n, count, dp);
    ans += (5 - count) * f(i + 1, n, count + 1, dp);

    return dp[i][count] = ans % 998244353;
}
int main()
{
    fast;
    ll t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<vector<ll>> dp(n, vector<ll>(6, -1));
        cout << f(0, n, 0, dp) % 998244353 << endl;
    }
}