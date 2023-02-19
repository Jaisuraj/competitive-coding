#include<iostream>
#include <map>
#include <vector>
#include<algorithm>
#include<numeric>
#include<cmath>
#include<set>
#include<unordered_set>
using namespace std;

typedef long long int ll ;
typedef double lld;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

#define mod 1000000000+7

string Reverse(string k, ll ind, ll n)
{
    string temp=k;
    ll j = 0;
    //cout << ind << endl;
    for (ll i = ind - 1; i >= 0; i--)
    {
        temp[j++] = k[i];
        temp[n - i] = k[n - i];
    }
    return temp;
}
int main()
{
    fast;
    ll t;
    cin >> t;
    while (t--)
    {
        string k;
        ll n;
        cin >> n;
        ll a[n];
        cin >> k;
        ll j = n-1;
        string s = k;
        string ans=k;
        while (j >= 0 && !(k[i] == 'a' || k[i] == 'e' || k[i] == 'i' || k[i] == 'o' || k[i] == 'u'))
        {
            j--;
        }
        ll sr = 0, e = j - 1, d = 0,ind = j - 1;
        while(ind>0)
        {
            string temp;
            while(ind>=0)
            {
                if((s[ind]=='a'||s[ind]=='e'||s[ind]=='i'||s[ind]=='o'||s[ind]=='u'))
                {
                    temp.push_back(s[ind]);
                    ind--;
                    break;
                }
                else
                    temp.push_back(s[ind]);
                ind--;
            }
            if(d%2==1)
            {
                for(auto it:temp)
                {
                    ans[e--] = it;
                }
            }
            else
            {
                for(auto it:temp)
                {
                    ans[sr++] = it;
                }
            }
            d++;
        }
        for(auto i:ans)
            cout << i;
        cout << endl;
    }
}