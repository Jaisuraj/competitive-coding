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
vector<string> vs;


void porder(string s1, string s2)
{
    if (s1.empty()) {
        if(s2!="")
        cout << s2 << ", ";
        return;
    }
    porder(s1.substr(1),s2 + s1[0]);

    porder(s1.substr(1), s2);
}
int main()
{
    string s;
    cin >> s;
    cout << "[";
    n = s.length();
    porder(s,"");
    cout << "]";
    cout << endl;
}