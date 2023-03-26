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
vector<ll> a,b;
vector<vector<ll>> v;
map<char, ll> mp;

bool isPrime(ll n1)
{
    ll f = 0;
    if(n1==1||n1==0)
        return false;
    for (ll i = 2; i <=n1 / 2;i++)
    {
        if((n1%i)==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    cin>>n;
    for (ll i = 0;i<=n;i++)
    {
        if(isPrime(i))
            cout << i << " ";
    }
}