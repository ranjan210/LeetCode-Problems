class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> vect;
        vector<int> lookup;
        const int size = nums.size();
        int arr[size];
        for (int index = 0; index < nums.size(); ++index)
        {
            std::vector<int>::iterator it;
            it = std::find(lookup.begin(),lookup.end(),target-nums[index]);
            if(it!=lookup.end()){
                int otherIndex = it - lookup.begin();
                vect.push_back(index);
                vect.push_back(otherIndex);

            }
            else{
                lookup.push_back(nums[index]);
            }
        }
        return vect;
    }
};