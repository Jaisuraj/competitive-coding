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
int main()
{
    ll t;
    cin >> t;
    string s1, s2;
    while (t--)
    {
        ll f = 0;
        cin >> s1 >> s2;
        ll n1 = s1.length();
        ll n2 = s2.length();
        ll i = 0, j = 0;
        while (i < n1 && j < n2)
        {
            if(s1[i++]<s2[j++])
            {
                cout << ">" << endl;
                f = -1;
               
                break;
            }
            else if(s1[i++]>s2[j++])
            {
                cout << "<" << endl;
                f = -1;
                break;
            }
            else
            {
                i++;
                j++;
            }
        }
        if(f==0())
        {
            cout <<s1<< "=" <<s2<< endl;
        }
    }
}