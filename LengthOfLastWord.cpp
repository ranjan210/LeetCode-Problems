class Solution {
public:
    int lengthOfLastWord(string s) {
        bool gotLet = false;
        int count = 0;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i] == ' ' && gotLet){
                return count;
            }
            if(s[i] != ' '){
                if(!gotLet)
                {gotLet = true;}
                count++;
            }

        }
        return count;
    }
};