#include<iostream>
#include <map>
#include <vector>
#include<algorithm>
#include<numeric>
using namespace std;

typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)


ll maxsum(ll i,ll j,ll k,vector<ll> &X,vector<ll> &Y,vector<vector<vector<ll>>> &dp){
    if(i < 0) return 0;
    if(dp[i][j][k] != -1) return dp[i][j][k];
    ll a = -1, b = -1;
    if(j == 3 && k == 3){
        a = X[i] + maxsum(i-1,1,0,X,Y,dp);
        b = Y[i] + maxsum(i-1,0,1,X,Y,dp);
    }
    if(j < 2){
        a = X[i] + maxsum(i-1,j+1,0,X,Y,dp);
    }
    if(k < 2){
        b = Y[i] + maxsum(i-1,0,k+1,X,Y,dp);
    }
    return dp[i][j][k] = max(a,b);
}

int main() {
    ll n;
    cin>>n;
    vector<ll> X(n),Y(n);
    for(ll i=0;i<n;i++){
        cin >> X[i] >> Y[i];
    }
    vector<vector<vector<ll>>> dp(n,vector<vector<ll>>(4,vector<ll>(4,-1)));
    cout<<maxsum(n-1,3,3,X,Y,dp); 
    return 0;
}