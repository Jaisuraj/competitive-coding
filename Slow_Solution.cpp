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
    while (t--)
    {
        ll m1, m2, s,k=0;
        cin >> m1 >> m2 >> s;
        while(m1>0&&s>0)
        {
            m1--;
            if(s>m2)
            {
                k = k + (m2 * m2);
                s = s - m2;
            }
            else
            {
                k = k + (s * s);
                break;
            }
        }
        cout << k<<endl;
    }
}