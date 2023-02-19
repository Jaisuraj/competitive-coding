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

const ll mod=1e9+7;

int main()
{
    fast;


ll n,m;
    cin>>n>>m;
    string S;
    vector<string>v;
    while(n--)
    {
        cin>>S;
        v.push_back(S);
    }
    ll ans=1;
    for(int i=0;i<m;i++)
    {
        set<char>s;
        for(int j=0;j<v.size();j++)
        {
            string p=v[j];
            s.insert(p[i]);
            //cout << p << endl;
        }
       ll  cnt=(ll)(s.size());
       //cout<<cnt<<endl;
       ans*=cnt;
       ans=ans%mod;
       s.clear();
    }
    cout<<(ans%mod)<<endl;
}