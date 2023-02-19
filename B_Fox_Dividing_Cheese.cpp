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
    ll a, b, c = 0;
    cin >> a >> b;
    ll ca=0, ca1=0, ca2=0, cb=0, cb1=0, cb2=0;
    while (a % 2 == 0)
    {
        a = a / 2;
        ca++;
    }
    while(b%2==0)
    {
        b = b / 2;
        cb++;
    }
    while(a%3==0)
    {
        a = a / 3;
        ca1++;
    }
    while(b%3==0)
    {
        b = b / 3;
        cb1++;
    }
    while(a%5==0)
    {
        a = a / 5;
        ca2++;
    }
    while(b%5==0)
    {
        b = b / 5;
        cb2++;
    }
    if(a!=b)
    {
        cout << -1 << endl;
    }
    else
        cout << abs(ca-cb)+abs(ca1-cb1)+abs(ca2-cb2) << endl;
}