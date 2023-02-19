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
    cin >> n;
    ll a[n][n];
    ll rDiag[10005], lDiag[10005];
    ll odd_max= -1, even_max= -1, o1, o2, e1, e2;
    for (ll i = 0; i < n; i++)
    {
        for(ll j = 0;j < n;j++)
        {
            cin >> a[i][j];
            rDiag[n+i-j]+= a[i][j];
            lDiag[i+j]+= a[i][j];
        }
    }
    for (ll i = 0; i < n; i++)
    {
        for(ll j = 0;j < n;j++)
        {
            ll poll= rDiag[n+i-j]+ lDiag[i+j]- a[i][j];

            if((i+j)&1){
                if(poll>odd_max){
                   odd_max= poll;
                   o1= i;
                   o2= j;
                }
            }
            else{
                if(poll>even_max){
                   even_max= poll;
                   e1= i;
                   e2= j;
                }
        }
    }
}
cout<<(even_max+odd_max)<<endl;
    cout<<e1+1<<" "<<e2+1<<" "<<o1+1<<" "<<o2+1<<" "<<endl;
}