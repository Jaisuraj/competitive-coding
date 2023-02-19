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
        ll sx, sy, ex, ey;
        cin >> sx >> sy >> ex >> ey;
        if(sx==ex||sy==ey)
        {
            cout << 2<<endl;
        }
        else{
            cout << 1 << endl;
        }
    }
}