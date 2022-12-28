//Tabulation method
TC- o(N)
     SC: o(N)

#include <bits/stdc++.h> 
int solve(vector<int>&nums )
{
     int n=nums.size();
    vector<int>dp(n,0);
    dp[0]=nums[0];
    for(int i=1;i<n;i++)
    {
        int inc=dp[i-2]+nums[i];
        int exc=dp[i-1]+0;
        dp[i]=max(inc,exc);
    }
    return dp[n-1];
}
int maximumNonAdjacentSum(vector<int> &nums){
   // int n=nums.size();
   // vector<int>dp(n,-1);
    return solve(nums);
  
    
}

// space optimization 
TC-o(N)
     SC-o(1)

#include <bits/stdc++.h> 
int solve(vector<int>&nums )
{
     int n=nums.size();
    //vector<int>dp(n,0);
    //dp[0]=nums[0];
    int prev2=0;
    int prev1=nums[0];
    for(int i=1;i<n;i++)
    {
        int inc=prev2+nums[i];
        int exc=prev1+0;
       int ans=max(inc,exc);
        prev2=prev1;
        prev1=ans;
    }
    return prev1;
}
int maximumNonAdjacentSum(vector<int> &nums){
   // int n=nums.size();
   // vector<int>dp(n,-1);
    return solve(nums);
  
    
}
