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

#define mod 1000000000+7


int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--) 
    {
        ll n, k;
        cin >> n >> k;
        map<int ,vector<int> > mp;
        int arr[n];
        for (ll i = 0; i < n;i++)
        {
            cin >> arr[i];
            mp[arr[i]].push_back(i);
        }
        ll a, b;
        while (k--)
        {
            cin >> a >> b;
            if(mp.find(a)==mp.end()||mp.find(b)==mp.end())
            {
                cout << "NO" << endl;
                continue;
            }

            if(mp[a].front()<=mp[b].back())
            {
                cout << "YES" << endl;
                continue;
            }

            cout << "NO" << endl;

        }
    }
}