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

bool f1(string st1, string st2)
{
    unordered_map<char, char> charCount;
    for (int i = 0; i < st1.length(); i++)
    {
        if (charCount.count(st1[i]))
        {
            if (charCount[st1[i]] != st2[i]) {
                return false;
            }
        }
        else {
            vector<char> values;
            for (auto it : charCount) {
                values.push_back(it.second);
            }
            if (find(values.begin(), values.end(), st2[i])
                != values.end()) {
                return false;
            }
            else {
                charCount[st1[i]] = st2[i];
            }
        }
    }
    return true;
}

int main()
{
    cin >> s >> s1;
    n = s.length();
    map<char, ll> mp,mp2;
    // for (ll i = 0; i < 26;i++)
    // {
    //     mp[(char)('a' + i)] ='\0';
    // }
    bool f = 0;
    // for (ll i = 0; i < n; i++)
    // {
    //     if(mp[s[i]]=='\0')
    //     {
    //     mp[s[i]] = s1[i];
    //     }
    //     else
    //     {
    //         if(mp[s[i]]==s1[i])
    //             continue;
    //         else 
    //         {
    //             f = -1;
    //         }
    //     }
    // }
    // for (ll i = 0;i<n;i++)
    // {
    //     if (mp[s[i]] && mp[s[i]] != s1[i])
    //         f = -1;
    //     if (mp2[s1[i]] && mp2[s1[i]] != s[i])
    //         f = -1;
    //     mp[s[i]] = s1[i];
    //     mp2[s1[i]] = s[i];
    // }
    f = f1(s, s1);
    (f == true&&s.length()==s1.length()) ? cout << "true" : cout << "false";
}