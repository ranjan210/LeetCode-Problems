class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> v;
        for(int i=0;i<=n;i++){
            v.push_back(count1s(i));
        }
        return v;
    }

    int count1s(int n){
        int count = 0;
        for(int i=31;i>=0;i--){
            int k = n >> i;
            if ( k & 1){
                count++;
            }
        }
        return count;
    }
};