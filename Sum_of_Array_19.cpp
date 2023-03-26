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
vector<ll> a,b,c;

ll f1(ll size,ll ans)
{
    if(size==n)
        return a[n-1];
    
    return ans + f1(size + 1, a[size]);
}

int main()
{
    cin>>n;
    a.resize(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout<<f1(0,0)<<endl;
}