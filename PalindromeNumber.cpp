class Solution {
public:
    bool isPalindrome(int x) {
        string original = to_string(x);
        if (x<0){
            return false;
        }
        else{
            int strLen = original.length();
            for(int i=0;i<strLen;i++){
                if(original[i]!=original[strLen-i-1]){
                    return false;
                }
            }
            return true;
        }

    }
};