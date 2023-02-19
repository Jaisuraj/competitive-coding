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
    ll n;
    cin >> n;
    ll r1 = n % 4;
    ll r2 = n % 7;
    if(r1==0)
    {
        if((n/4)>=7)
        {
            ll t = (n / 4)%7;
            ll t1 = t;
            //double k =ceil((double)n / 28);
            //cout << k << endl;
            while (t1--)
            {
                cout << 4;
            }
            ll x = ((n-(t*4))/7);
            //cout << x << endl;
            // cout << x << endl;
            while (x--)
            {
                cout << 7;
            }
            cout<<endl;
        }
        else
        {
            ll e = n / 4;
            while (e--)
            {
                cout << 4;
            }
            cout << endl;
        }
        while(r1--)
        {
            cout << 4;
        }
        cout << endl;
    }
    else if(r2%4==0)
    {
        n = n - r2;
        while(r2>0){
            r2 = r2 - 4;
            cout << 4;
        } 
        while (n>0)
        {
            cout << 7;
            n = n - 7;
        }
        cout << endl;
    }
    else
    {
        ll n1 = n;
        ll cf = 0, cs = 0, flag = 0;
        while (n1 > 0)
        {
        if(n1%7==0)
        {
            flag = 1;
            break;
        }

        else
        {
        n1 = n1 - 4;
        cf++;
        }
        }
        if(flag==1)
        {
        while(cf--)
        {
            cout << 4;
        }
        while (n1 > 0)
        {
            n1 = n1 - 7;
            cout << 7;
        }
            cout << endl;
        }
        else
        {
            ll n2 = n;
            while (n2 > 0)
            {
                if(n2%4==0)
                {
                    flag = 1;
                    break;
                }
                else
                    cs++;
                n2 = n2 - 7;
            }
            n = n - 7*cs;
            if(n%4==0&&flag==1)
            {
            while(n>0)
            {
                cout << 4;
                n = n - 4;
            }
            while(r2--)
            {
                cout << 7;
            }
            cout << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }
}      
