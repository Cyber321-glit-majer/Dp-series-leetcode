
#include <bits/stdc++.h> 
long long int helper(vector<int>& nums){
    long long int prev2 = 0;
    long long int prev1 = nums[0];
    
    for(int i = 1; i < nums.size(); i++){
        long long int pick = nums[i] + prev2;
        long long int notpick = 0 + prev1;
        long long int ans = max(pick, notpick);
        prev2 = prev1;
        prev1 = ans;
    }
    return prev1;
}

long long int houseRobber(vector<int>& nums)
{
    int n = nums.size();
    if(n == 1){
        return nums[0];
    }
    vector<int> v1, v2;
    for(int i = 0; i < nums.size(); i++){
        if(i != 0){
            v2.push_back(nums[i]);
        }
        if(i != n-1){
            v1.push_back(nums[i]);
        }
    }
    return max(helper(v1), helper(v2));
}
