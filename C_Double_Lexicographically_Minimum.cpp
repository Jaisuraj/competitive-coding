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

unordered_set<ll> cubes;

int main()
{
    fast;
    ll t;
    cin >> t;
    while (t--)
    {

        cin >> s;
        //sort(s.rbegin(), s.rend());
        string k = s;
        ll n = s.length();
        ll i = 0, j = n - 1,c=0;
        while (i < j) {

        cout << s[j--];
        cout << s[i++];
        }
    if (n % 2 != 0)
        cout << s[i];
        //cout << k << endl;
    cout << endl;
    }
}