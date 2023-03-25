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
const ll INF = 1;
vector<ll> a,b;
vector<vector<ll>> v;
int main()
{
    ll m,n;
    cin>>m>>n;
    for (ll i = 0;i<m;i++)
    {
        for (ll j = 0; j < n;j++)
        {
            ll x;
            cin >> x;
            a.push_back(x);
        }
        v.push_back(a);
        a.clear();
    }
    ll top = 0,left=0,right=n-1,down=m-1;
    ll nn = (m * n);
    ll c;
    // for (ll i = 0; i < m;i++)
    // {
    //     for (ll j = 0; j < n;j++)
    //     {
    //         cout << v[i][j] << " ";
    //     }
    //     cout << endl;
    // }
        while (c <nn)
        {
        k++;
        for (ll i = top; i <= right; i++)
        {
            if(c<nn)
            {
            cout << v[top][i] << " ";
            c++;
            }
        }
            top++;
            for (ll i = top; i <=down; i++)
            {
                if(c<nn)
            {
                cout << v[i][right] << " ";
                c++;
            }
            }
            right--;

            for (ll i = right; i >= left; i--)
            {
                if(c<nn)
            {
                cout << v[down][i] << " ";
                c++;
            }
            }
            down--;
            for (ll i = down; i >= top; i--)
            {
                if(c<nn)
            {
                cout << v[i][left] << " ";
                c++;
            }
            }
            left++;
            
        }
}