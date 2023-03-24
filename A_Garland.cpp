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
        string s;
        cin>>s;
        if(s[0]==s[1]&&s[0]==s[2]&&s[0]==s[3])
        {
            cout << -1 << endl;
        }
        else
        {
            ll c = 0;
            for (ll i = 0; i < 3; i++)
            {
                for (ll j = i+1; j < 4;j++)
                {
                    if(i==j)
                        continue;
                    else
                    {
                        if(s[i]==s[j])
                            c++;
                    }
                }
            }
            if(c==3)
                cout << 6 << endl;
            else 
                cout << 4 << endl;
        }
    }
}