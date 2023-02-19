#include<iostream>
#include <map>
#include <vector>
#include<algorithm>
#include<numeric>
#include<cmath>
#include<set>
#include<unordered_set>
#include<queue>
using namespace std;

typedef long long int ll ;
typedef double lld;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

#define mod 1000000000+7
ll c=0;

void fun(int x,ll n){
    
    if (x <= n)
    {
        c++;
    }
else
    return;
fun(10*x+0,n);
fun(10*x+1,n);
}

int main()
{
    fast;
    ll n, i = 1, j = 11,k;
    cin>>n;
    fun(1,n);
    cout << c << endl;
}
