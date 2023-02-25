#include<iostream>
#include <map>
#include <vector>
#include<algorithm>
#include<numeric>
#include<cmath>
#include<cstring>
#include<iomanip>
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
        ll n;
        cin >> n;
        string s,k;
        cin >> s;
        k = s;
        reverse(k.begin(), k.end());
        if(s==k)
            cout << "Yes" << endl;
        else 
        {
            ll i = 0,j=n-1,a=0;
            while (i <= j)
            {
                if(s[i]==s[j]&&a==0)
                {
                    i++;
                    j--;
                }
                else
                {
                    if(s[i]!=s[j])
                    {
                        s[i] = s[j];
                        i++;
                        j--;
                        a++;
                    }
                    else 
                    {
                        break;
                    }
                }
            }
            k = s;
            reverse(k.begin(), k.end());
            if(s==k)
            cout << "Yes" << endl;
            else
            cout << "No" << endl;
        }
    }
}
