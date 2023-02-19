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
    while (t--)
    {
        string k;
        cin >> k;
        if(k[0]=='Y'||k[0]=='y')
        {
            if(k[1]=='E'||k[1]=='e')
            {
                if(k[2]=='S'||k[2]=='s')
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
            else 
            {
                cout << "NO" << endl;
            }
        }
        else 
        {
            cout << "NO" << endl;
        }
    }
}