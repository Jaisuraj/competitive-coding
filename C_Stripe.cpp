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

int main()
{
    fast;
    ll n;
    cin>>n;
    ll a[n],p[100005];
    for (ll i = 1; i <= n; i++)
    {
        cin>>a[i];
        p[i]=p[i-1]+a[i];
    }
   int c=0;
   for(int i=1;i<n;i++)
   {
       if(p[i]==p[n]-p[i])
       c++;
   }
   cout<<c<<endl;
}