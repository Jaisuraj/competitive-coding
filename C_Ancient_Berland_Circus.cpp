#include<iostream>
#include <map>
#include <vector>
#include<algorithm>
#include<numeric>
#include<cmath>
#include<cstring>
#include <cctype>
#include <iomanip>
using namespace std;

typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)


int main()
{
    fast;
    vector<pair<double, double>> v(3);
    for (ll i = 0;i<3;i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    cout << fixed << setprecision(8) << v[2].first;
}

    int max_ending_here = arr[0];
    int min_ending_here = arr[0];
    int max_so_far = arr[0];
    for (int i = 1; i < n; i++) {
        int temp = max({ arr[i], arr[i] * max_ending_here,
                         arr[i] * min_ending_here });
        min_ending_here
            = min({ arr[i], arr[i] * max_ending_here,
                    arr[i] * min_ending_here });
        max_ending_here = temp;
        max_so_far = max(max_so_far, max_ending_here);
    }
    return max_so_far;