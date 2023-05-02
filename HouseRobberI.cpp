class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        int secondLastPrev = nums[0];
        int lastPrev = std::max(nums[0],nums[1]);

        for(int i=2;i<nums.size();i++){
            int temp = lastPrev;
            lastPrev = std::max(nums[i]+secondLastPrev,lastPrev);
            secondLastPrev = temp;
        }
        return lastPrev;

    }
};