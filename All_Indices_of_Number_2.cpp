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

ll f1(vector<ll> a, ll size,
                    ll x)
{
      if(size == 0)
        return 0;
      ll ans = f1(a, size - 1, x);
     
    if(a[size - 1] == x)
    {
      b[ans++] = size - 1;
    }
    return ans;
}
 
void f(vector<ll> a, ll n, ll x)
{
    ll size = f1(a, n, x);
    for (int i = 0; i < size; i++) {
        cout << b[i] << " ";
    }
}

int main()
{
    cin>>n;
    a.resize(n);
    b.resize(n);
    for (ll i = 0; i < n;i++)
    {
        cin >> a[i];
    }
    ll x;
    cin >> x;
    f(a, n, x);

}