class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int currVal = *(nums.begin());
        for(auto it=nums.begin()+1;it!=nums.end();){
            if (*it == currVal){
                it = nums.erase(it);
            }
            else{
                currVal = *it;
                ++it;
            }
        }
        return nums.size();
    }
};