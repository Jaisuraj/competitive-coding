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


  
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll a,b,c,f=0;
        //cout << 11-t << endl;
        cin >> a >> b >> c;
        double k;
        k = (double)(a+c)/2;
        if(b==k||b==a==c)
            cout << "YES" << endl;
        else if (a==0&&c==0)
        {
            cout << "NO" << endl;
        }
        else
        {
            if((2*b)<((a+c)))
            {
                double k;
                k = (double)(a+c)/(2*b);
                //cout << k << endl;
                if (k == (ll)k)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
            else
            {
                ll a1 = a, c1 = c;
                double k;
                k = (double)(2*b-c)/(a);
                double k1 = (double)(2 * b - a) / c;
                if(k1==(ll)k1||k==(ll)k)
                {
                    cout << "YES" << endl;
                }
                // for (ll i = 2; (2*b)>(a1 + c); i++)
                // {
                //     a1 = i * a;
                //     k = (double)(a1+c)/2;
                //     if(b==k)
                //     {
                //         cout << "YES" << endl;
                //         f = 1;
                //     }
                // }
                // if(f==0)
                // {
                //     for (ll i = 2; (2*b) > (a + c1);i++)
                // {
                //     c1 = i * c;
                //     k = (double)(a+c1)/2;
                //     if(b==k)
                //     {
                //         cout << "YES" << endl;
                //         f = 1;
                //     }
                // }
                else
                    cout << "NO" << endl;
            }
        }
    }
}