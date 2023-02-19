#include<iostream>
#include <map>
#include <vector>
#include<algorithm>
#include<numeric>
#include<list>
#include<cmath>
#include<set>
#include<unordered_set>
using namespace std;

typedef long long int ll ;
typedef long double lld;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

#define mod 1000000000+7

string removeDuplicates(string s){
     
   int n = s.length();
   string str="";
   if (n == 0)
     return str;
    for(int i=0;i<n-1;i++){
        if(s[i]!=s[i+1]){
            str+=s[i];
        }
    }
   str.push_back(s[n-1]);
   return str;   
}

int main()
{
    fast;
    ll t;
    cin >> t;
    for (ll i = 1; i <= t;i++)
    {
        ll ans, i1, j, l1, l2, i2, t1, c;
        string a, b;
        cin>>a;
        cin>>b;
        c=0;ans=0;
        l1=a.size();
        l2=b.size();
        for (i1 = 0, i2 = 0; i1 < l1 && i2 < l2;)
        {
            if(a[i1]==b[i2]){
                c++;
                i1++;
                i2++;
            }else{
                i2++;
                ans++;
            }
        }

        cout<<"Case #"<<i<<": ";
        
        if(c==l1){
            cout<<ans+(l2-i2)<<"\n";
        }else{
            cout<<"IMPOSSIBLE\n";
        }
    }
    }
