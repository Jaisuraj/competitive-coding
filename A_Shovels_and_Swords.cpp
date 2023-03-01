
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
#include<unordered_map>
typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
using namespace std;
int main()
{
    fast;
    int t;
    ll a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a > b){
            swap(a,b);
        }
        if(a*2 <= b){
            cout<<a<<endl;
        }
        else{
            cout<<(a+b)/3<<endl;
        }
    }

    return 0;
}