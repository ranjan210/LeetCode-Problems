class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int curr = 0;
        int size = nums.size();
        for(auto i=nums.begin();i!=nums.end();++i){
            if(*i == val){
                nums.erase(i);
                i--;
                curr++;
            }
        }
        return size-curr;
    }
};