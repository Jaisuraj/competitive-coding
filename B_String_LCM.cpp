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

ll gcd(ll a, ll b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 
string check(string s, int k)
{
     string r="";
     while(k--)
     {
          r+=s;
     }
     
     return r;
}

int main()
{
     ll t;
     cin>>t;
     while(t--)
     {
          string s,t;
          cin>>s>>t;
          ll g= gcd(s.length(),t.length());
          if(check(s,t.length()/g)== check(t,s.length()/g))
          cout<<check(s,t.length()/g)<<endl;
          else
          cout<<-1<<endl;
     }
}