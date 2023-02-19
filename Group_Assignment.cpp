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
     ll t;
     cin>>t;
     while(t--)
     {
         ll n,x,f=0;
         cin >> n;
         ll a[n];
         map<ll, ll> mp;
         for (ll i = 0; i < n; i++)
         {
             cin >> a[i];
             x = a[i];
             mp[x]=0;
         }
         for (ll i = 0; i < n; i++)
         {
             x = a[i];
             mp[x]++;
         }
         for (ll i = 0; i < n; i++)
         {
             x = a[i];
             if (mp[x]%x==0)
             {
                 f++;
             }
             
         }
         if(f==n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
     }
}