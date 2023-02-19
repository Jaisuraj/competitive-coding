#include<iostream>
#include <map>
#include <vector>
using namespace std;

typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

int main()
{
    fast;
    int t;
    cin >> t;
    vector<pair<ll, ll> > v(t);
    for (int i = 0; i < t; i++)
    {
        cin >> v[i].first >> v[i].second;
        if(v[i].first==1&&v[i].second==1)
        {
            cout << 1<<endl;
        }
        else
        {
            ll d = 0,c=0;
            d = v[i].second*(v[i].second+1)/2;
            c = v[i].first * (v[i].first + 1) / 2 * v[i].second - v[i].second;
            cout << d+c << endl;
        }
    }
}