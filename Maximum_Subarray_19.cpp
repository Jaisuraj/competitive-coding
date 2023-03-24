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
vector<ll> a,pre;
vector<vector<ll>> v;
int main()
{
    cin>>n;
    a.resize(n);
    pre.resize(n + 1);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if(i)
            pre[i] = pre[i - 1] + a[i];
        else
            pre[0] = a[0];
    }
    sort(pre.rbegin(), pre.rend());
    cout<<pre[0];
    

}