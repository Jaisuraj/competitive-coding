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
    int a[10]={0};
        for(int i=0;i<n;i++){
            int tm;cin>>tm;
            tm=tm%10;
            a[tm]+=1;
        }
        bool ans=false;
        for(int i=0;i<10;i++){
            if(a[i]>0){
                a[i]--;
                for(int j=0;j<10;j++){
                    if(a[j]>0){
                        a[j]--;
                        int tm=23-i-j;
                        tm%=10;
                        if (a[tm]>0){
                            ans=true;
                            break;
                        }
                        a[j]++;
                    }

                }
                a[i]++;
                if (ans){
                    break;
                }
            }
        }
        if(ans){
            cout<<"YES"<<endl;

        }
        else{
            cout<<"NO"<<endl;
        }
}
}
