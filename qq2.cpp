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
#include<unordered_map>
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


int main()
{
    cin>>s;
    n = s.length();
    string k="";
    for (ll i = 0; i < n; i++)
    {
        if(s[i]<97)
        {
            
            if(i)
                k = k + " ";
            k = k + (char)(s[i] + 32);
        }
        else
        {
            k=k+s[i];
        }
    }
    cout << k << endl;
}