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
    cin>>t;
    while(t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        vector<ll> d(n-1);
        bool flag = false;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] % 5 == 0) {
            flag = true;
            a[i] = (a[i]+a[i]%10);
        }
    }
    if (flag) {
        cout << (*min_element(a.begin(), a.end()) == *max_element(a.begin(), a.end()) ? "Yes": "No") << '\n';
    } else {
        bool flag2 = false, flag12 = false;
        for (int i = 0; i < n; ++i) {
            int x = a[i];
            while (x % 10 != 2) {
                x = x+x%10;
            }
            if (x % 20 == 2) {
                flag2 = true;
            } else {
                flag12 = true;
            }
        }
        cout << ((flag2 & flag12) ? "No" : "Yes") << '\n';
    }
    }
}