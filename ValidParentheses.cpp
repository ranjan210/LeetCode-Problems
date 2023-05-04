class Solution {
public:
    bool isValid(string s) {
        stack<int> sts;
        for(int i=0;i<s.length();i++){
            if(s[i]=='{'||s[i]=='('||s[i]=='['){
                sts.push(s[i]);
            }
            if(s[i]=='}'){
                if(sts.empty()){
                    return false;
                }
                if(sts.top()=='{'){
                    sts.pop();
                }
                else{
                    return false;
                }
            }
            else if(s[i]==')'){
                if(sts.empty()){
                    return false;
                }
                if(sts.top()=='(' ){
                    sts.pop();
                }
                else{
                    return false;
                }
            }
            else if(s[i]==']'){
                if(sts.empty()){
                    return false;
                }
                if(sts.top()=='[' && !sts.empty()){
                    sts.pop();
                }
                else{
                    return false;
                }
            }
        }
        if(sts.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};