#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
#include<unordered_map>
using namespace std;

unordered_map<int,int> lookup;
    
    int dp(int a, int mask, vector<int>& nums, int m){
        if(mask==0) return 0;
        int key=a+mask*10;
        if(lookup.find(key)==lookup.end()){
            int maxVal=0;
            for(int i=0;i<m;i++){
                if(mask&(1<<i)){
                    for(int j=i+1;j<m;j++){
                        if(mask&(1<<j)){
                            maxVal=max(maxVal,a*__gcd(nums[i],nums[j])+dp(a+1,mask^(1<<i)^(1<<j),nums,m));;
                        }
                    }
                }
            }
            
            lookup[key]=maxVal;
        }
        return lookup[key];
    }
    
    int maxScore(vector<int>& nums) {
        int m=nums.size();
        return dp(1,(1<<m)-1,nums,m);
    }

int main() {
    int n1;
    cin >> n1;
    int n2 = 2 * n1;
    vector<int> v;
    for (int i = 0;i<n2;i++)
    {
            int x;
            cin >> x;
            v.push_back(x);
    } 
    cout<<maxScore(v);
    return 0;
}