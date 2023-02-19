
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
    int n, k, a;
    cin >>n >>k;
    ll v[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >>v[i];
    }
            ll sum[n+1],l=0,times=0;
        	sort(v+1,v+n+1);
        	sum[0]=0;
        	for(int j=1;j<=n;j++){l=l+v[j];sum[j]=l;}
        	ll  val=v[1];
        	for(int i=1;i<=n;i++)
            {
                ll low=1,high=i,freq=-1;
                while(low<=high)
                {
                    ll mid=(low+high)>>1;
                    ll c=(i-mid+1ll)*v[i]-(sum[i]-sum[mid-1]);
                    if(c<=k)
                    {
                        high=mid-1;
                        freq=mid;
                    }
                    else
                    {
                        low=mid+1;
                    }
                }
                if(freq==-1) freq=1;
                else freq=i-freq+1;
                if(times<freq){
                   times=freq;
                   val=v[i];
                }
            }
            cout << times << " " << val;
}