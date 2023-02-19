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

long long gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}

ll max(ll a,ll b)
{
    if(a>=b)
        return a;
    return b;
}

int main()
{
    fast;
    ll n;
    cin >> n;
    if (n > 3)
    {
        if(n%2==0)
        {
            if(n%3==0)
            {
                cout << (n-2) * (n - 1) * (n - 3) << endl;

            }
            else
            {
                cout << n * (n - 1) * (n - 3) << endl;
            }
        }
        else{
            cout<<n*(n-1)*(n-2)<< endl;
        }
    }
    else if(n==3)
    {
        cout << n*2 << endl;
    }
    else{
        cout << n << endl;
    }
}