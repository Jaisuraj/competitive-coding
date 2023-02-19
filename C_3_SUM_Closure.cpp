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


  
int main()
{
    fast;
    ll t;
    cin >> t;
    while(t--)
    {
    ll n;
        cin >> n;
        ll x;
        vector<ll> s;
        vector<ll>a(n);
        ll done = true;
        ll z = 0;
        for (ll i = 0; i < n; i++)
        {
 
            cin >> x;
            a[i]=x;
            if (x != 0)
                s.push_back(x);
            else
                z++;
        }
        sort(s.begin(),s.end());
        sort(a.begin(),a.end());
        ll done1=false;
        if(n==3){
            if(a[0]+a[1]==0)done1=true;
            if(a[2]+a[1]==0)done1=true;
            if(a[0]+a[2]==0)done1=true;
            if(done1){cout<<"YES"<<endl;continue;}
        }
        if (z > 0)
        {
            if (!(s.size() == 0 || s.size() == 2||s.size() ==1))
            {
                done = false;
            }
            ll sum=0;
            if(s.size()==2){
                if(s[0]+s[1])done=false;
            }
        }
        else
        {
        if(n==4){
            if((a[0]==a[1]&&a[3]==3*a[2])||(a[0]==3*a[1]&&a[3]==a[2])){cout<<"YES"<<endl;continue;}
        
        }
            if (s.size() != 4)
                done = false;
            for (ll i = 0; i < s.size(); i++)
            {
                if (s[i] + s[n - i - 1])
                    done = false;
            }
 
        }
        if(done)cout<<"YES"<<endl;
        else
            cout << "NO" << endl;
    }
    }
