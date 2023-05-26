class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        vector<int> pCurr={1};
        res.push_back(pCurr);
        for(int i=1;i<numRows;i++){
            vector<int>curr;
            int n = i+1;
            for(int k=0;k<n;k++){
                int l = k-1;
                int r = k;
                if(l<0 && r < pCurr.size()){
                    curr.push_back(pCurr[r]);
                }
                if(l>=0 && r >= pCurr.size()){
                    curr.push_back(pCurr[l]);
                }
                if(l>= 0 && r < pCurr.size()){
                    curr.push_back(pCurr[r]+pCurr[l]);
                }
            }
            res.push_back(curr);
            pCurr.clear();
            pCurr = curr;
        }
        return res;
    }
};