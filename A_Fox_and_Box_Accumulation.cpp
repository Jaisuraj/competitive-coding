#include<iostream>
#include <map>
#include <vector>
#include<algorithm>
#include<numeric>
#include<cmath>
#include<set>
#include<unordered_set>
#include<queue>
using namespace std;

typedef long long int ll ;
typedef double lld;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

#define mod 1000000000+7

int main()
{
    fast;
    ll n;
    cin >> n;
    ll a[n],a1[n];
    priority_queue<int, vector<int>, greater<int> > q;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (ll i = 0; i <n;i++)
    {
        if(q.empty()==0&&q.top()<=a[i])
        {
            a[i] = q.top() + 1;
            q.pop();
            q.push(a[i]);
        }
        else{
            q.push(1);
        }
    }
    cout << q.size() << endl;
}