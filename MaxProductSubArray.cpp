class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        if(n==1){
            return nums[0];
        }
        // if zero comes you can drop the current subarray
        int result = nums[0];
        int index = 0;
        int maxTillNow = 1;
        int minTillNow = 1;
        while(index < n){
            int elem = nums[index];
            if(elem == 0){
                result = max(maxTillNow*elem,result);
                minTillNow = 1;
                maxTillNow = 1;
                index++;
                continue;
            }
            int temp = maxTillNow*elem;
            maxTillNow = max(max(maxTillNow*elem,elem*minTillNow),elem);
            minTillNow = min(min(temp,elem*minTillNow),elem);

            result = max(maxTillNow,result);
            index++;
        }

        return result;
    }
};