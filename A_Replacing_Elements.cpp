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
        int n,d;
        cin>>n>>d;
        int *ar = new int [n];
        for (int i = 0; i < n; ++i) {
            cin>>ar[i];
        }
        vector<int> v1;
        vector<int> v2;
        for (int i = 0; i < n; ++i) {
            if (ar[i]<=d){
                v1.push_back(ar[i]);
            } else{
                v2.push_back(ar[i]);
            }
        }
        if (v2.size()==0){
            cout<<"YES\n";
        } else {
            sort(v1.begin(), v1.end());
            if (v1.size()>=2){
                if (v1[0]+v1[1]<=d){
                    cout<<"YES\n";
                } else{
                    cout<<"NO\n";
                }
            }else{
                cout<<"NO\n";
            }
        }
    }
    }
