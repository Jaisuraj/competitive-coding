#include<iostream>
#include <map>
#include <vector>
#include<algorithm>
#include<numeric>
#include<cmath>
#include<cstring>
#include<iomanip>
using namespace std;

typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

ll n,t;
vector<ll> prefix,v;
ll check(ll x)
{
    if(v[x]==v[x+1])
        return 0;
    return 1;
}
int main()
{
    fast;
    ll t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> cnt(n + 1);
		for (int i = 0; i < n; ++i) {
			int x;
			cin >> x;
			++cnt[x];
		}
		int mx = *max_element(cnt.begin(), cnt.end());
		int diff = n + 1 - count(cnt.begin(), cnt.end(), 0);
		cout << max(min(mx - 1, diff), min(mx, diff - 1)) << endl;
    }
}