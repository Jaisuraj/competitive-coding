#include<iostream>
#include <map>
#include <vector>
#include<algorithm>
#include<numeric>
#include<cmath>
#include<cstring>
using namespace std;

typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)


int main()
{
    fast;
    ll a, b, c, ans = 0,f=-1;
    cin >> a >> b >> c;
    if((a==1&&c==1)||(a==1&&b==1&&c==1))
    {
        ans = a + b + c;
    }
    else
    {
        if(a==1)
        {
            b=b+a;
            ans = b*c;
        }
        else if(c==1)
        {
            b = b + c;
            ans = b*a;
        }
        else if(b==1)
        {
            if(a<=c)
            {
                b = b + a;
                ans = b * c;
            }
            else
            {
                b = b + c;
                ans = b * a;
            }
        }
        else{
            ans = a * b * c;
        }
    }
    cout << ans << endl;
}