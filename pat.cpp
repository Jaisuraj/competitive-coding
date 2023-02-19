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
    ll n;
    cin >> n;
    vector<ll> X(n);
    vector<ll> Y(n);
    vector<pair<ll, ll>> v;
    ll xc = 0, yc = 0,ans=0;
    for (int i = 0; i < n; i++)
    {
        cin >> X[i] >> Y[i];
        v.push_back({abs(X[i] - Y[i]),i});

    }
    for (ll i = 0; i < n; i++)
    {
        if(X[i]>Y[i]&&xc<2)
        {
            ans = ans + X[i];
            xc++;
            yc = 0;
        }
        else if(X[i]<Y[i]&&yc<2)
        {
            ans = ans + Y[i];
            yc++;
            xc = 0;
        }
        else{
            if(xc>=2)
            {
                xc = 0;
                ans = ans + Y[i];
            }
            else if (yc>=2){
                yc = 0;
                ans = ans + X[i];
            }
            else
            {
            ans = ans + Y[i];
            xc = 0;
            yc = 0;
            }
        }
    }
    cout << ans;

    return 0;
}
