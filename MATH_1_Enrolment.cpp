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
     ll t;
     cin>>t;
     while(t--)
     {
        ll x,y;
        cin >> x >> y;
        if(x>y)
            cout << 0 << endl;
        else
            cout << y - x<<endl;
     }
}