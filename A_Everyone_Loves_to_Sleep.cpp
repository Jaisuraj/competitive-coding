#include<iostream>
#include <vector>
#include <map>
#include <numeric>
#include<algorithm>
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
    while (t--)
    {
        ll h, m, n, flag = 0, k = 0,k1=0;
        cin >> n >> h >> m;
        ll h1[n], m1[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> h1[i] >> m1[i];
            //cout << h1[i] << " " << m1[i] << endl;
            if(h1[i]==h&&m1[i]==m)
            {
                flag = 1;
            }
            else if((h1[i] - h)>k&&(h1[i]-h)>0)
                {
                    k = h1[i] - h;
                    k1 = m1[i] - m;
                    cout << k << " "<< k1<<endl;
                    if (k1 < 0)
                    {
                        k1 = 60+k1;
                        k--;
                    }
                }
        }
        if(flag==1)
        {
            cout << "0 0" << endl;
            flag = 0;
        }
        else cout << k << " " << k1 << endl;
        
    }
    }
