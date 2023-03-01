#include<iostream>
#include <map>
#include <vector>
#include<algorithm>
#include<numeric>
#include<cmath>
#include<cstring>
#include<iomanip>
#include<set>
#include<unordered_set>
using namespace std;

typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

ll n,k,m;
string s;
const ll N = 1000000000000L;
vector<pair<ll, ll>> p;

using namespace std;

#define ll long long
#define MOD 1000000007
#define SIZE 1e6+2
#define endl "\n"


void solve() {
    string a,b; cin>>a>>b;
    ll n=a.size(),m=b.size();
    if(n==1 and m==1){
        if(a==b){
            cout<<"YES"<<endl;
            cout<<a<<endl;
            return;
        }
        cout<<"NO"<<endl;
        return;
    }
    if(a[0]==b[0] or a[n-1]==b[m-1]){
        cout<<"YES"<<endl;
        if(a[0]==b[0]) cout<<a[0]<<"*"<<endl;
        else cout<<"*"<<a[n-1]<<endl;
        return;
    }
    
    for(ll i=0; i<n; i++){
        for(ll j=0; j<m; j++){
            if(a[i]==b[j]){
                if(i<n-1 and j<m-1){
                    if(a[i+1]==b[j+1]){
                        cout<<"YES"<<endl;
                        cout<<"*"<<a[i]<<a[i+1]<<"*"<<endl;
                        return;
                    }
                }
            }
        }
    }
    cout<<"NO"<<endl;
    
}

int main(){
    fast;
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}