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

ll n,k;

const ll N = 1000000000000L;
vector<pair<ll, ll>> p;

unordered_set<ll> cubes;

void precalc() {
  for (ll i = 1; i * i * i <= N; i++) {
    cubes.insert(i * i * i);
  }
}

int main()
{
    fast;
    precalc();
    ll t;
    cin >>t;
    
    
    while (t--)
    {
        ll x,f=1;
  cin >> x;
  for (ll i = 1; i * i * i <= x; i++) {
    if (cubes.count(x - i * i * i)) {
      cout << "YES\n";
      f = 0;
      break;
    }
    }
    if(f==1)cout << "NO\n";
    }
}