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

#include<iostream>
using namespace std;
int main()
{
    int n = 100;
    int a[100][100];
    for (int i = 0; i < 100; i++)
    {
        for (ll j = 0; j < 100;j++)
        {
            a[i][j] = 1;
        }
    }
    //     int t = 0, t1 = 0;
    // for (int i = 0; i < s.length(); i=i+2)
    // {
    //     t=s[i]-48 + t;
    //     t1 = s[i + 1] - 48 + t1;
    // }
    // cout << t1-t << endl;
}