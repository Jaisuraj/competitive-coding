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

bool pali(string str,
              int s2, int e)
{
    if (s2 == e)
    return true;
    if (str[s2] != str[e])
    return false;
    if (s2 < e + 1)
    return pali(str, s2 + 1, e - 1);
    return true;
}
int main()
{
    cin >> s;
    string temp = s;
    n = s.length();
    (pali(s, 0, n-1) == true) ? cout << "true" : cout << "false";
}