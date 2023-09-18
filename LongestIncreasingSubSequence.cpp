class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        // Iterate through nums,
        // check the nums before that, if number is smaller than the curr number
        // if it is, then check the size of max subsequence at that point
        // add one to it and check if that is greater than the max subsequence for current number
        int n = nums.size();
        int maxOverall = 1;

        vector<int> dp(n,1);
        for(int i=1;i<n;i++){
            int currMax = 1;
            for(int j=i-1;j>=0;j--){
                if(nums[i] > nums[j]){
                    if(dp[j]+1>currMax){
                        currMax = dp[j] + 1;
                    }
                }
            }
            dp[i] = currMax;
            // cout << currMax << ": " << nums[i] << endl;
            if(currMax > maxOverall){
                maxOverall = currMax;
            }
        }
        return maxOverall;
    }
};