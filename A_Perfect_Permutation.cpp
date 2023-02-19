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
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        vector<ll> v;
        if(n==1)
        {
            cout << 1 << endl;
        }
        else{
            for (ll i = 1; i <= n; i++)
        {
            if(i%2==0)v.push_back(i-1);
            else
                v.push_back(i + 1);
            
        }
        if(n%2!=0)
            {
                for (ll i = 0; i <= v.size() - 3;i++)
                {
                    cout << v[i] << " ";
                }
                cout << v[n - 1] - 1 << " " << v[n - 2] << " ";
            }
            else{
                for (ll i = 0; i <= v.size() - 1;i++)
                {
                    cout << v[i] << " ";
                }
            }
        cout << endl;

        }
        
    }
}