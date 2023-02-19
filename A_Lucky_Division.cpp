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
    ll n;
    cin >> n;
    ll l,f=0,temp;
    temp = n;
    while (temp > 0)
    {
        ll r = temp % 10;
        temp = temp / 10;
        if(r!=4&&r!=7)
        {
            f = 1;
            break;
        }
    }
    if(f==0)
        cout << "YES" << endl;
    else
    {
        if(n%4==0||n%7==0||n%47==0||n%74==0||n%447==0||n%474==0||n%744==0||n%774==0||n%747==0||n%477==0||n%444==0||n%777==0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}