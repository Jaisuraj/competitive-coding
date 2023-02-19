#include<iostream>
#include <vector>
#include <map>
#include <numeric>
#include<algorithm>
#include<set>
#include<unordered_set>
using namespace std;

typedef long long int ll;

string longestPalSubstr(string str)
{
    string longest = "";
    int n = str.length();
    int j;
    string subs = "";
    string subsrev = "";
    for(int i = 0; i < n; i++){
        j = n-1;
        while(i < j){
            if((str[i] == str[j]) && (longest.length() <=(j-i+1))){
               subs = str.substr(i,(j-i+1));
               subsrev = subs;
               reverse(subsrev.begin(), subsrev.end());
               if(subs == subsrev){
                  longest = subs;
               }
            }
            j--;
        }
    }
    if(longest.length() == 0){
        if((n-1)>=0)
        longest = str[n-1];
        else
        longest = "";
    }
    return longest;
}

ll Minimum_Window(string s, string t)
{
 
    ll m[256] = { 0 };
    ll ans = INT_MAX; 
    ll start = 0;
    ll count = 0;
    for (ll i = 0; i < t.length(); i++) {
        if (m[t[i]] == 0)
            count++;
        m[t[i]]++;
    }
    ll i = 0;
    ll j = 0;
 
    while (j < s.length()) {
        m[s[j]]--;
        if (m[s[j]] == 0)
            count--;
        if (count == 0) {
            while (count == 0) {
                if (ans > j - i + 1) {
                    ans = min(ans, j - i + 1);
                    start = i;
                }
                m[s[i]]++;
                if (m[s[i]] > 0)
                    count++;
 
                i++;
            }
        }
        j++;
    }
 
    if (ans != INT_MAX)
        {
            string h=s.substr(start, ans);
            return h.length();
        }
    else
        return -1;
}


int main()
{
    string s1, s2;
    ll k;
    cin >> s1;
    cin >> s2;
    cin >> k;
    string t1 = longestPalSubstr(s1);
    string t2 = longestPalSubstr(s2);
    if(Minimum_Window(t1, t2)==-1)
        cout << "NO" << endl;
    else
    {
        if(Minimum_Window(t1, t2)>=k)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}