#include<iostream>
#include <map>
#include <vector>
#include<algorithm>
#include<numeric>
using namespace std;

typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

int main()
{
    fast;
    ll a[3],ans;
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a + 3);
    ans= min(a[0]+a[1],(a[0]+a[1]+a[2])/3);
    cout<<ans<<endl;
}
    
