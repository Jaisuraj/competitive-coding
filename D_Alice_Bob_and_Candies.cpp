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
typedef long double lld;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

#define mod 1000000009

int main()
{
    fast;
    ll t;
    cin >> t;
    while(t--)
    {
        // ll n;
        // cin >> n;
        // vector<ll>v(n);
        // ll fp[n+1],rp[n+1];
        // fp[0] = 0;
        // rp[0] = 0;
        // for (ll i = 0; i < n; i++)
        // {
        //     cin >> v[i];
        //     fp[i + 1] += v[i];
        // }
        // for (ll i = n-1; i >=0; i--)
        // {
        //     rp[n-i] += v[i];
        // }
        // ll a=v[0], b,c=0,t=0,j=0,ans=0;
        // v.erase(v.begin());
        // cout << a << " " << v[0]<<" "<<v[n-1];
        // while (v.size() > 1)
        // {
        //     while(a>b&&v.size() > 0)
        //     {
        //         ll x = v.size() - 1;
        //         b += v[x];
        //         v.erase(v.end() - 1);
                

        //         //cout << *(v.end()-1) << "hello ";

        //     c++;
        //     }
        //     if(c>0)
        //     {
        //         ans++;
        //         c = 0;
        //     }
        //     while (b > a && v.size() > 0)
        //     {
        //         a = a + v[0];
        //         v.erase(v.begin());
        //         c++;
        //         // cout << v.size() << " ";
        //     }
        //     if(c>0)
        //     {
        //         c = 0;
        //         ans++;
        //     }
        // }
        // cout<<"\n"<<ans<<" "<<a<<" "<<b<<endl;
        long long int n ;
    cin >> n;
    vector< long long int > v(n) ;
    for(auto &x : v){
        cin >> x;
    }

    long long int move = 0 , a = 0 , b = 0 , t = 0;

    for(int i = 0 , j = n-1; i <= j ;){

        long long int target = 0 ;
        long long int temp = 0 ;

        if(move & 1){
            for( ; i <= j ; j--){
                if(temp > t){
                    break ;
                }
                temp += v[j] ;
            }
            b += temp ;
        }
        else{
            for( ; i <= j ; i++){
                if(temp > t){
                    break ;
                }
                temp += v[i] ;
            }
            a += temp ;
        }
        t = temp ;
        ++ move ;

    }
    cout << move << " " << a << " " << b << endl ;
    }
}