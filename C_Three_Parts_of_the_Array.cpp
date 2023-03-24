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
vector<ll> a,pre,suff;

int main()
{
    ll n;
    cin>>n;
    a.resize(n);
    pre.resize(n + 1);
    suff.resize(n + 1);
    ll s = 0,ans=0;
    pre[0] = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if(i)
            pre[i] = pre[i - 1] + a[i-1];
        s = s + a[i];
    }
    pre[n] = s;
    ll i = 0, j = n - 1;
    while(i<j)
    {
        if(pre[i]<pre[j-i+1])
        {
            i++;
        }
        else if(pre[i]<pre[j-i+1])
        {
            j--;
        }
        else
        {
            ans = pre[j-i+1];
            cout << i << " " << j << endl;
            i++;
            j--;
        }
    }
    cout << ans << endl;
}