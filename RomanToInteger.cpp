class Solution {
public:
    int romanToInt(string s) {
        map<char,int> romans = {{'M',1000},{'D',500},{'C',100},{'L',50},{'X',10},{'V',5},{'I',1}};
        int result = 0;
        char prevChar = s[0];
        for(int i=0;i<s.length();i++){
            if(romans[s[i]]<=romans[prevChar]){
                result += romans[s[i]];
            }
            else{
                result += romans[s[i]] - (2*romans[prevChar]);
            }
            prevChar = s[i];
        }
        return result;
    }
};