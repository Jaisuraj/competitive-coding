#include<iostream>
#include <vector>
#include <map>
#include <numeric>
#include<algorithm>
#include<set>
using namespace std;

typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

ll gcd(ll n1,ll n2)
{
    while(n1 != n2) {
    if(n1 > n2)
      n1 -= n2;
    else
      n2 -= n1;
  }
  return n1;
}

int main()
{
    fast;
    ll t;
    cin >> t;
    while(t--)
    {
    ll x1, x2,c=0;
    cin >> x1 >> x2;
    while(gcd(x1,x2)==1)
    {
      x1++;
      x2++;
      c++;
      if(c>10009)
      {
          c = -1;
          break;
      }
    }
    cout << c << endl;
    
    }
}