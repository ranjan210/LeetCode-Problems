class Solution {
public:
    bool isPalindrome(string s) {
        formatString(s);
        for(int i=0;i<s.length();i++){
            if(s[i]!=s[s.length()-1-i]){
                return false;
            }
        }
        return true;
    }

    void formatString(string& s){
        for(int i=0;i<s.length();i++){

        if(!isalnum(s[i])){
            s.erase(i,1);
            i--;
        }
        }
        transform(s.begin(),s.end(),s.begin(),::tolower);
    }
};