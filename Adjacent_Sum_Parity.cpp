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
        ll n, f = 0;
        cin >> n;
        ll B[n],temp[n];
        for (ll i = 0; i < n;i++)
        {
            cin >> B[i];
        }
        temp[0] = 0;
        for (ll i = 0; i < n;i++)
        {
            if(i==n-1)
            {
                if(B[i]==0)
                {
                    if(temp[i]==0)
                    {
                        cout << "YES"<<endl;
                        f = 1;
                        break;
                    }
                }
                else{
                    if(temp[i]!=0)
                    {
                        cout << "YES" << endl;
                        f = 1;
                        break;
                    }
                }
            }
        else if(B[i]==0)
        {
            temp[i + 1] = temp[i];
        }
        else{
            temp[i + 1] = 1 - temp[i];
        }
        }
        temp[0] = 1;
        if(f!=1)
        {
        for (ll i = 0; i < n;i++)
        {
            if(i==n-1)
            {
                if(B[i]==0)
                {
                    if(temp[i]==1)
                    {
                        cout << "YES"<<endl;
                        f = 1;
                        break;
                    }
                }
                else{
                    if(temp[i]!=1)
                    {
                        cout << "YES" << endl;
                        f = 1;
                        break;
                    }
                }
            }
        else if(B[i]==0)
        {
            temp[i + 1] = temp[i];
        }
        else{
            temp[i + 1] = 1 - temp[i];
        }
        }
        }
        if(f!=1)cout << "NO" << endl;
    }
}