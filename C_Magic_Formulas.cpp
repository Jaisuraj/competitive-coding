#include<iostream>
#include <vector>
#include <map>
#include <numeric>
#include<algorithm>
#include<set>
#include<unordered_set>
using namespace std;

typedef long long int ll;



ll MaxSubarraySum(vector<ll> nums, ll k)
{
    unordered_set<ll> map;
    ll left = 0, res = -1, sum = 0;
    for(ll right = 0; right<nums.size(); right++)
    {
        while(left < right && (map.count(nums[right]) || map.size() >= k))
        {
            sum -= nums[left];
            map.erase(nums[left]);
            left++;
        }
        sum +=nums[right];
        map.insert(nums[right]);
            
        if (map.size() == k)
            res = max(res, sum);
    }
    return res;
}
int main()
{
    ll n,k;
    cin >> n>>k;
    vector<ll> a(n);
    for (ll i = 0;i<n;i++)
    {
        cin >> a[i];
        if(a[i]%2==0)
            a[i] = a[i] - 1;
    }
    if(MaxSubarraySum(a, k)==-1)
        cout << 0 << endl;
    else
    cout << MaxSubarraySum(a, k) << endl;
}