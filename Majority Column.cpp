class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int k = nums.size()/2;
        map<int,int> mt;
        for(int i=0;i<nums.size();i++){
            mt[nums[i]] += 1;
            if(mt[nums[i]] > k){
                return nums[i];
            }
        }
        return nums[0];
    }
};