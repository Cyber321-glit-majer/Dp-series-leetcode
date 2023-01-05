// Recursive solution

class Solution {
public:
int sol(vector<int>&v,int i)
{
    if(i>=v.size())
    return 0;
    int take=v[i]+sol(v,i+2);
    int dont=sol(v,i+1);
    return max(take,dont);
}
    int rob(vector<int>& nums) {
        return sol(nums,0);
    }
};

//  Time Complexity: 2^N 

//memoization
class Solution {
public:
 
int sol(vector<int>&v,int i,vector<int>&dp)
{
    if(i>=v.size())
    return 0;
    if(dp[i]!=-1)
    return dp[i];
    int take=v[i]+sol(v,i+2,dp);
    int dont=sol(v,i+1,dp);
    return dp[i]=max(take,dont);
}
    int rob(vector<int>& nums) {
        vector<int>v(nums.size(),-1);
        return sol(nums,0,v);
    }
};


// Tabulation //bottom appproach
class Solution {
public:
 
    int rob(vector<int>& nums) {
        if(nums.size()==1)
        return nums[0];
        vector<int>dp(nums.size(),0);
dp[nums.size()-1]=nums[nums.size()-1];
dp[nums.size()-2]=max(nums[nums.size()-1],nums[nums.size()-2]);
for(int i=nums.size()-3;i>=0;i--)
{
    dp[i]=max(dp[i+1],dp[i+2]+nums[i]);
}
return dp[0];
         
    }
};

//Time complexity: o(N)
