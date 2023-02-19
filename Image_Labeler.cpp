#include<iostream>
#include <map>
#include <vector>
#include<algorithm>
#include<numeric>
#include<list>
#include<cmath>
#include<set>
#include<unordered_set>
#include<climits>
#include<iomanip>
using namespace std;

typedef long long int ll ;
typedef long double lld;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

#define mod 1000000000+7



int main()
{
    fast;
    ll t;
    cin >> t;
    for (ll i = 1; i <= t;i++)
    {
        ll n, m,x,y;
        cin >> n >> m;
        double a[n];
        for (ll j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        x = m;
        y = n;
        sort(a, a + n);
        cout << "Case #" << i << ": ";
        double s = 0;
        ll k = 0;
        while (m > 1)
        {
            m--;
            y--;
            k++;
            s = s + a[n - k];
        }
        if(y%2!=0)
        {
            cout << fixed << setprecision(1) <<(a[y / 2] + s) << endl;
        }
        else
        {
            cout << fixed << setprecision(1) <<(a[y / 2]+a[(y / 2)-1])/2 + s << endl;
        }
            
}
}

