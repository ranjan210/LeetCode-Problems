class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 0;
        int n = digits.size();
        for(int i = n-1;i>=0;i--){
            if (i==n-1){digits[i]++;}
            digits[i] += carry;
            carry = 0;
            if(digits[i]>9){
                digits[i] = digits[i]-10;
                carry = 1;
            }
            if(carry==0){
                break;
            }
            if(carry==1 && i == 0){
                digits.insert(digits.begin(),1);
            }
        }
        return digits;
    }
};