#include<iostream>
#include <map>
#include <vector>
#include<algorithm>
#include<numeric>
#include<cmath>
#include<cstring>
#include <cctype>
#include <iomanip>
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
    vector<vector<int>> v( n , vector<int> (3, 0));
    ll ans = 0,ans2=0,ans3=0;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < 3;j++)
        {
            cin >> v[i][j];
        }
    }
    for (ll i = 0;i<n;i++)
    {
        ans = ans + v[i][0];
        ans2 = ans2 + v[i][1];
        ans3 = ans3 + v[i][2];
    }
    if(ans==0&&ans2==0&&ans3==0)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}