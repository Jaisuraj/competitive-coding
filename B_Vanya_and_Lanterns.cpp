#include<iostream>
#include <map>
#include <vector>
#include<algorithm>
#include<numeric>
#include<cmath>
#include<cstring>
#include<iomanip>
using namespace std;

typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)


int main()
{
    fast;
    ll n, l;
    cin>>n>>l;
    vector<ll>a(n),a1;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        
    }

    sort(a.begin(), a.end());
    if(n==1)
    {

        cout << fixed << setprecision(10) << (double)max(l-a[0],a[0]-0);
    }
    else
    {
    for (ll i = 1; i < n; i++)
    {
        a1.push_back(abs(a[i - 1] - a[i]));
    }

    sort(a1.rbegin(), a1.rend());
    cout << fixed << setprecision(10) <<max((double)a1[0]/2,(double)max(a[0]-0,l-a[n-1]))<<endl;
    }
    
}