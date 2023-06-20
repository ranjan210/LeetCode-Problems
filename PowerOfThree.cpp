class Solution {
public:
    bool isPowerOfThree(int n) {
        bool rem = false;

        if(n==1){
            return true;
        }

        if(n%3!=0 || n == 0){
            return false;
        }

        while(n>=4){
            if(n%3!=0){
                return false;
            }
            n = n/3;
        }

        return true;
    }
};