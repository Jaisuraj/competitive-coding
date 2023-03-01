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
vector<ll, ll> v;

int gcd(int a,int b)
{
        if(a%b==0){
            return b;
        }
        return gcd(b,a%b);
}
unordered_map<string,int> memo;
    int recur(vector<int> &num,string &vis,int k){
        if(k==0){
            return 0;
        }
        int ans = 0;
        int n = num.size();
        for(int i=0;i<num.size();i++){
            int temp = 0;
            if(!vis[i]){
                vis[i] = 1;
                for(int j=i+1;j<num.size();j++){
                    if(!vis[j]){
                        vis[j] = 1;
                        temp = max(temp,(n/2-k+1)*gcd(num[i],num[j])+(memo.find(vis)!=memo.end()?memo[vis]:recur(num,vis,k-1)));
                        vis[j] = 0;
                    }
                }
                vis[i] = 0;
                ans = max(ans,temp);
            }
        }
        return memo[vis] = ans;
    }
    int maxScore(vector<int>& nums) {
        
        string vis(nums.size(),0);
        int k = nums.size()/2;
        int ans;
        ans = recur(nums,vis,k);
        // ans = gcd(8,10);
        return ans;
    }
int main()
{
    fast;
    int n;
    cin >> n;
    v.resize(2*n);
    for (ll i = 0;i<n;i++)
    {
        cin >> v[i];
    }
    cout << maxScore(v);
}