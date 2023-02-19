#include<iostream>
#include <map>
#include <vector>
#include<algorithm>
#include<numeric>
#include<cmath>
#include<set>
#include<unordered_set>
using namespace std;

typedef long long int ll ;
typedef long double lld;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

#define mod 1000000009

int main()
{
    fast;
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        vector<int> a(n);
		vector<int> cnt(n + 1);
		int ans = 0;
		for (auto &it : a) 
		{
			cin >> it;
			++cnt[it];
		}
		for (int l = 0; l < n; ++l) 
		{
			int sum = 0;
			for (int r = l; r < n; ++r) 
			{
				sum += a[r];
				if (l == r)
				{
				    continue;
				}
				if (sum <= n) 
				{
					ans += cnt[sum];
					cnt[sum] = 0;
				}
			}
		}
		cout << ans << endl;
    }
}