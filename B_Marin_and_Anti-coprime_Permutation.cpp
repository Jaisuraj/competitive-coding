#include<iostream>
#include <map>
#include <vector>
using namespace std;

typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int findGCD(int arr[], int n)
{
    int result = arr[0];
    for (int i = 1; i < n; i++)
    {
        result = gcd(arr[i], result);
  
        if(result == 1)
        {
           return 1;
        }
    }
    return result;
}

int main()
{
    fast;
    ll t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        ll a[n];
        for (ll i = 1; i <= n; i++)
        {
            a[i - 1] = a[i];
        }
        if(findGCD(a, n)>1)
        {
            
        }
    }
}