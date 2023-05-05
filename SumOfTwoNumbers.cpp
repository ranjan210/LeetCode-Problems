class Solution {
public:
    int getSum(int a, int b) {
        // While there's still carry to add
        unsigned int carry = 0;
        while(b!=0){
            carry = (a&b);
            a = a ^ b;// keep adding carry untill carry is zero
            b = (carry)<<1;
        }
        return a;
    }


};