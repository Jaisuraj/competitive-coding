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

ll N,T;
ll cnt = 0;
void dfs(map<ll , set<ll>> & adj , ll u , ll parent , vector<bool>& vis){
  
  if(vis[u])
     return;


 vis[u] = true;
 cnt++;


 for(auto it = adj[u].begin() ; it != adj[u].end() ; it++){
    if(*it == parent)
        continue;

    if(vis[*it])
        continue;


    dfs(adj , *it , u , vis);
 }

}



int main(){

    fast;

    cin >> T;
    while (T--)
    {
        cin >> N;

        map<ll, ll> mp;
        ll u, v;
        map<ll, set<ll>> adj;
        bool flag = true;
        for (ll i = 0; i < N; i++)
        {
            cin >> u >> v;
            mp[u]++;
            mp[v]++;

            if (u == v)
            {
                flag = false;
            }

            adj[u].insert(v);
            adj[v].insert(u);
        }

        for (auto it : mp)
        {
            if (it.second != 2)
            {
                flag = false;
                break;
            }
        }

        if (!flag)
        {
            cout << "NO\n";
            continue;
        }

        vector<bool> vis(N + 1, false);

        for (ll i = 1; i <= N; i++)
        {
            cnt = 0;
            if (!vis[i])
            {
                dfs(adj, i, -1, vis);
            }

            if (cnt % 2)
            {
                flag = false;
                break;
            }
        }

        if (!flag)
        {
            cout << "NO\n";
            continue;
        }

        cout << "YES" << endl;
    }

    return 0;
}