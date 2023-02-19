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
        ll X, Y;
        cin >> X >> Y;
        if(X>=Y)
            cout << X << endl;
        else{
            cout << Y << endl;
        }
    }
}