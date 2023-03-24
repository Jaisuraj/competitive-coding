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
vector<ll> a,b;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll s;
        cin >> s;
            s = s - 1;
            cout << (ll)sqrt(s)<< endl;
    }
}