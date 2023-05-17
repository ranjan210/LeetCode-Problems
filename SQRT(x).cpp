class Solution {
public:
    int mySqrt(int x) {
        int ans;
        if(x==0||x==1){
            return x;
        }
        int l = 0;
        int r = x;
        int mid;
        while(l<=r){
            mid = l + ((r-l)/2);
            if(x/mid == mid){
                return mid;
            }
            else if( x/mid > mid ){

                l = mid+1;
                ans = mid;
            }
            else{
                r = mid-1;
            }
        }
        return ans;
    }
};