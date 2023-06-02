class Solution {
public:
    string convertToTitle(int columnNumber) {
        int n =  columnNumber;
        string s="";
        while(n>0){
            int r = n % 26;
            if(r==0){
                r = 26;
            }
            n -= r; 
            s = char(64+r) + s;
            n /= 26;
        }
        return s;
    }
};