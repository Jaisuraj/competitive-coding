#include<iostream>
#include <vector>
#include <map>
#include <numeric>
#include<algorithm>
#include<set>
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
        ll a, b, c;
        cin >> a >> b >> c;
        int ta = abs(a - 1);
		int tb = abs(b - c) + abs(c - 1);

		if(ta == tb) cout<<3<<endl;
		else if(ta < tb) cout<<1<<endl;
		else
            cout << 2 << endl;
    }
}