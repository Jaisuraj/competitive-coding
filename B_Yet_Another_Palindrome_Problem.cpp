#include<iostream>
#include <map>
#include <vector>
#include<algorithm>
#include<numeric>
#include<cmath>
#include<cstring>
using namespace std;

typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)


int main()
{
    fast;
    ll t, n, a[5001];
    cin >> t;
    while(t--)
    {
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        bool tag = false;
        for(int i=0; i<n; i++){
            for(int j=i+2; j<n; j++){
                if(a[i] == a[j]){
                    tag = true;
                    break;
                }
            }
            if(tag == true){
                break;
            }
        }
        if(tag ==  true){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}