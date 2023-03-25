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
string s,s1;
const ll N = 1000000000000L;
const ll INF = 1;
vector<ll> a,b,c;

int repeated_digit(ll n)
{
    unordered_set<ll> s;
    while(n != 0)
    {
        ll d = n % 10;
   
        if(s.find(d) != s.end())
        {
            return 0;
        }
        s.insert(d);
        n = n / 10;
    }
    return 1;
}
int calculate(ll L,ll R)
{
    ll answer = 0;
    for(ll i = L; i < R + 1; ++i)
    {
        answer = answer + repeated_digit(i);
    }
   
    return answer ;
}
int main()
{
    
    cin >> n >> m;
    ll nn = m - n+1;
    ll c = 0;
    cout << calculate(n,m);
}