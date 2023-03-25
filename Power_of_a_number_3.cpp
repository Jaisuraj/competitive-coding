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
vector<ll> a,b;
vector<vector<ll>> v;

ll power1(ll n,ll m)
{
    if(m==0)
        return 1;
    if(n==0)
        return 0;
    return n * power1(n, m - 1);
}
int main()
{
    cin>>n>>m;
    cout << power1(n, m) << endl;
    
}