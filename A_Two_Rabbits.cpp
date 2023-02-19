#include<iostream>
#include <map>
#include <vector>
#include<algorithm>
#include<numeric>
#include<cmath>
using namespace std;

typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

int main()
{
    fast;
    ll t;
    cin >> t;
    while(t--)
    {
        ll x, y, a, b, flag = 0;
        cin >> x >> y >> a >> b;
        if(((y-x)%(a+b))==0)
        {
            cout << (y-x)/(a+b)<<endl;            
        }
        else
        {
            cout << -1<<endl;
        }
}
}