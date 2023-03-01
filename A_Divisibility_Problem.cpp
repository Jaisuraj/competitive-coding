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
vector<pair<ll, ll>> p;

int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
        ll a, b;
        cin >> a >> b;
        if(a%b!=0)
        cout << b-a % b << endl;
        else
        cout << 0 << endl;
    }
}