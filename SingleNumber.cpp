class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map <int,int> mt;
        for(int i=0;i<nums.size();i++){
            if(mt.find(nums[i])!=mt.end()){
                mt[nums[i]]++;
            }
            else{
                mt[nums[i]] = 1;
            }
        } 
        for(int i=0;i<nums.size();i++){
            if(mt[nums[i]]<2){
                return nums[i];
            }
        }
        return nums[0];
    }
};