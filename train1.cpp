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

int main()
{
    cin>>s;
    ll ml = 0, b = 0;
    n = s.length();
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '(') {
            b++;
        } else {
            b--;
        }
        if (b < 0) {

            b = 0;
            ml = i + 1;
        } else if (b == 0) {
            ml = ((i + 1) > ml) ? i + 1 : ml;
        }
    }
    cout << ml << endl;
}