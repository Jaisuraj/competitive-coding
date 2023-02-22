#include<iostream>
#include <map>
#include <vector>
#include<algorithm>
#include<numeric>
#include<cmath>
#include<cstring>
#include<iomanip>
using namespace std;

typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)


int main()
{
    fast;
    ll n,a,b,c;
    cin>>n>>a>>b>>c;
       ll ans=0,rem,k;
       for(ll i=0;i*a<=n;++i)
       {
           for(ll j=0;i*a+j*b<=n;++j)
           {
                rem=n-i*a-j*b;
                if(rem%c==0)
                {
                    k=rem/c;
                ans=max(ans,i+j+k);}
           }

       }
       cout<<ans<<endl;
}