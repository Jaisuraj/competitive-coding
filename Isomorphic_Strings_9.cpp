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
string s,s1;
const ll N = 1000000000000L;
const ll INF = 1;
vector<ll> a,b;
vector<vector<ll>> v;

bool isIsomorphic(string s, string t) {
        map<char,char> mp,mp1;
        int i=0,j=0;
        while(i<s.length() && j<t.length()){
            if(!mp.count(s[i]) && !mp1.count(t[j])){
                mp[s[i]]=t[j];
                mp1[t[j]]=s[i];
            }else{
                if(mp[s[i]]!=t[j] || mp1[t[j]]!=s[i]) return false;
            }
            i++;j++;
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
    f = isIsomorphic(s, s1);
    (f == true) ? cout << "true" : cout << "false";
}