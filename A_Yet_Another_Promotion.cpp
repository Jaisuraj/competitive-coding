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
    ll t;
    cin>>t;
    while(t--)
    {
        ll ans = 0;
        ll a, b, n, m;
        cin>>a>>b;
        cin >> n >> m;
        ll x = n + m;
        if(n<=m)
        {
            cout << n * min(a, b) << endl;
        }
        else{
            if((m*a)<(m+1)*b)
            {
                ll t1, t2, t3;
                t1 = n / (m + 1);
                t2 = n %(m + 1);
                t3 = t1 * m * a;
                t3 = t3 + t2 * min(a, b);
                cout << t3 << endl;
            }
            else{
                cout << n * b << endl;
            }
        }
    }
}
