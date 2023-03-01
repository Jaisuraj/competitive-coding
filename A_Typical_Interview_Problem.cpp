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
        ll c = 0,c1=0,ff=1;
        cin >> n;
        string s1;
        cin >> s1;
        string fb = "";
        for (ll i = 1; i <= 500; i++)
        {
        if (i % 3 == 0)
            fb += 'F';
        if (i % 5 == 0)
            fb += 'B';
        }
        for (int i = 0; i + n < 500; i++)
        {
            ll f = 1;
        for (int j = 0; j < n; j++)
        {
            if (fb[i + j] != s1[j])
            f = 0;
            }
        if (f)
        {
            ff = -1;
            break;
        }
        }
        if(ff!=-1)cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    }
