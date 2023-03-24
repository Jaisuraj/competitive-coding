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

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
       string s;
       cin>>s;
       vector<vector<long long>> dp(n + 1, vector<long long>(2, N));
        dp[0][0] = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                dp[i + 1][0] = dp[i][0];
                dp[i + 1][1] = dp[i][1] + N;
            } else {
                dp[i + 1][0] = dp[i][0] + i;
                dp[i + 1][1] = min(dp[i][0], dp[i][1]) + N;
            }
        }
        cout << min(dp[n][0], dp[n][1])<< endl;
    }
    }