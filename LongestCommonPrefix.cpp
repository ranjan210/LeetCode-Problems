class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string largestPrefix = strs[0];
        for (int i=1;i<strs.size();i++){
            int len = 0;
            for(int j=0;j<largestPrefix.length();j++){
                if(strs[i][j]!=largestPrefix[j]){
                    if(len < largestPrefix.length()){
                        largestPrefix = strs[i].substr(0,j);
                    }
                } 
            }
        }
        return largestPrefix;
    }
};