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
    ll a;
    ll sum;
    string s;
    cin >> a >> s;
    int n = s.size();
    map<ll, int> cnt;
    for(int i=0;i<n;i++) { // x1 and x2
        sum = 0;
        for(int j=i;j<n;j++) {
            sum += s[j]-'0';
            cnt[sum]++;
        }
    }
    ll res = 0;
    if(a!=0) {
        for(int i=0;i<n;i++) { //y1 and y2
            sum = 0;
            for(int j=i;j<n;j++) {
                sum += s[j]-'0';
                if(sum!= 0 && a%sum == 0) res += cnt[a/sum];
            }
        }
    } else {
        ll zero = cnt[0];
        res += zero*zero;
        for(auto p : cnt) if(p.first) res += zero*p.second*2LL;
    }
    cout << res;
}