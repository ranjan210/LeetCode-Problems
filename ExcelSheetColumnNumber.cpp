class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n = columnTitle.length();
        int sum = 0;
        for(int i=n-1;i>=0;i--){
            int curr = columnTitle[i] - 64;
            int index = n-i-1;
            curr = pow(26,index)*curr;
            sum += curr;
        }
        return sum;
    }
};