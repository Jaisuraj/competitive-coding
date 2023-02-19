#include<iostream>
#include <vector>
#include <map>
#include <numeric>
#include<algorithm>
#include<set>
using namespace std;

typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

int main()
{
    fast;
    ll a, b,r=0,t;
    cin>>a>>b;
    if(a==b)
    {
        cout << 1 << endl;
    }
    else
    {
        while(b!=0)
        {
            r+=a/b;
            a=a%b;
            t = a;
            a = b;
            b = t;
        }
        cout << r << endl;
    }
}