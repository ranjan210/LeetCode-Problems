class Solution {
public:
    int numDecodings(string s) {
        if(s.length()==1){
            if(s[0]=='0'){
                return 0;
            }
            else{
                return 1;
            }
        }
        int n = s.length();
        vector<int> v(n,0);

        if(stoi(s.substr(n-1,1)) > 0){
            v[n-1] = 1;
        }
        if(s[n-2] =='0'){
            v[n-2] = 0;
        }
        else if(stoi(s.substr(n-2,2)) > 26){
            v[n-2] = v[n-1];
        }
        else{
            v[n-2] = v[n-1] + 1;
        }

        for(int i=n-3;i>=0;i--){
                // tens place
                if(stoi(s.substr(i,2)) < 27 && stoi(s.substr(i,2)) > 9){
                    v[i] += v[i+2];
                }
                // ones place
                if(stoi(s.substr(i,1)) < 10 && stoi(s.substr(i,1)) > 0){
                    v[i] += v[i+1];
                }
        }

        return v[0];
    }
};