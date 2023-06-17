// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int start = 1;
        int end = n;
        int index;
        while(end>=start){
            index = start + (end-start)/2;
            if(index==1){
                if(isBadVersion(index)){
                    return 1;
                }
            }
            if(isBadVersion(index)){
                if(!isBadVersion(index-1)){
                    return index;
                }
                else{
                    end = index - 1;
                }
            }
            else{
                start = index+1;
            }
            
        }
        return 1;
    }
};