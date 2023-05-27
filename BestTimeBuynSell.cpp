class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = prices[0];
        int maxP=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]<l){
                l = prices[i];
            }
            else {
                if(prices[i]-l>maxP){
                    maxP = prices[i]-l;
                }
            }
        }
        return maxP;
    }
};