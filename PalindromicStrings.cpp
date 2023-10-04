class Solution {
public:
    int countSubstrings(string s) {

        int len = s.length();
        bool state[len][len];
        for(int i=0;i<len;i++){
            for(int j=0;j<len;j++){
            state[i][j] = false;
        }
        }
        for(int a=0;a<len;a++){
            state[a][a] = true;
        }

        int count=len;

        for(int i=len-1;i>=0;i--){
            for(int dist=1;dist<len-i;dist++){ // dist + i be less than len
              int j=i+dist; // i is start point , j is end point
              if(dist==1){
                  state[i][j] = (s[i]==s[j]); 
              }
              else{
                state[i][j] = (state[i+1][j-1] && s[i]==s[j]);
              }
              if(state[i][j]){
                  count++;

              }


            }
        }
        return count;
    }
};