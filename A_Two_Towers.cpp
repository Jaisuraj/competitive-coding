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
    ll t;
    cin>>t;
    while (t--)
    {
        ll m, n;
        cin >> m >> n;
        string s1, s2;
        cin >> s1 >> s2;
        ll c1 = 0, c2 = 0;
        for (ll i = 1; i < m; i++)
        {
            if(s1[i]==s1[i-1])
            {
                c1++;
                
            }
        }
        for (ll i = 1; i < n;i++)
        {
            if(s2[i]==s2[i-1])
            {
                c2++;
                
            }
        }
        if(c1>1||c2>1||(c1==1&&c2==1))
            cout << "NO" << endl;
        else if((c1==1||c2==1)&&s1[m-1]==s2[n-1])cout << "NO" << endl;

        else
            cout << "YES" << endl;
    }
}