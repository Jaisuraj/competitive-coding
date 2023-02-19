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
         ll n, k;
         cin >> n >> k;
         ll a[n];
         ll j = k-1;
         for (ll i = 0; i < n;i++)
         {
             if (i < k)
             {
                 a[i] = i+1;
             }
             else{
                 a[i] = j--;
             }
         }
         for (ll i = 0; i < n;i++)
         {
             cout << a[i] << " ";
         }
         cout <<endl;
     }
}