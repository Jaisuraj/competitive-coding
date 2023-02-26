#include<iostream>
using namespace std;

typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

int a[10000];
int check(int x)
{
    if(a[x]<a[0])return 1;
    return 0;
    
}

int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int lo = 0, hi = n - 1, ans = 0;
        while(lo<=hi)
        {
            int mid=(lo+hi)/2;
            //cout << mid << endl;
            if (check(mid) == 0)
            {
                lo=mid+1;
                
            }
            else
            {
                hi=mid-1;
                ans=mid;
            }
            
        }
        cout<<ans<<endl;
    }
}