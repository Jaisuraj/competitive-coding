#include<iostream>
#include <map>
#include <vector>
#include<algorithm>
#include<numeric>
#include<cmath>
#include<cstring>
#include<iomanip>
using namespace std;

typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

int main()
{
    fast;
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n & 1){
            cout<<"YES"<<endl;
        }
        else{
            bool ok = false;
            ll div = n;
            while(div > 2){
                div /= 2;
                if(div & 1){
                    if(n % div == 0){
                        ok = true;
                        break;
                    }
                }
            }
            if(ok){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}