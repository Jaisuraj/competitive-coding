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
        ll S, X, Y, Z;
        cin >> S >> X >> Y >> Z;
        ll diff = S - X - Y;
        if(Z-diff<=0)
        {
            cout << 0 << endl;
        }
        else{
            if(Z==S)
                cout << 2 << endl;
            else{
                if(X>Y)
                {
                    diff = diff +X;
                    if(Z-diff<=0)
                    {
                        cout << 1 << endl;
                    }
                    else{
                        cout << 2 << endl;
                    }
                }
                if(X<=Y)
                {
                    diff = diff +Y;
                    if(Z-diff<=0)
                    {
                        cout << 1 << endl;
                    }
                    else{
                        cout << 2 << endl;
                    }
                }
            }
        }
    }
}