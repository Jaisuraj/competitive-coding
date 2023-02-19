#include<iostream>
#include <map>
#include <vector>
#include<algorithm>
#include<numeric>
#include<cmath>
using namespace std;

typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

int main()
{
    fast;
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,x;
        cin>>n;
        vector<ll>v;
        for(ll i=0;i<n;i++)
        {
            string k;
            cin>>k;
            
            if (k[0] == 'a')
            {
                cin >> x;
                v.push_back(x);
            }
            else if(k[0]=='p')
            {
                cin >> x;
                if(x<v.size())cout<<v[x]<<endl;
                else
                    cout << 0<<endl;
            }
            else if(k[0]=='r')
            {
                if(!v.empty())v.pop_back();
            }
            else{
                v.clear();
            }
        }
    }
}












