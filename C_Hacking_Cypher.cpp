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
    string k;
    cin >> k;
    //cout << k;
    ll a, b, i = 0;
    cin >> a >> b;
    string sub = k.substr(0, k.length()/2);
    cout << sub << endl;
}