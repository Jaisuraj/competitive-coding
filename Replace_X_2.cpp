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

string rem(string s1,char X)
{
    if (s1.length() == 0) {
        return "";
    }
    if (s1[0] == X) {
 
        return rem(s1.substr(1), X);
    }
    return s1[0]+ rem(s1.substr(1), X);
}


int main()
{
    cin >> s;
    n = s.length();
    s= rem(s,'x');
    cout << s << endl;
}
