class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0;
        while(i<(m+n)&&j<n){
            if(nums1[i]<nums2[j]){
                i++;
            }
            else{
                nums1.insert(nums1.begin()+i,nums2[j]);
                i++;
                j++;
            }
        }
        if(i>=m+n){
            for(int k=j;j<n;j++){
                nums1[m+j] = nums2[j];
            }
        }
        int t = nums1.size() - (m+n);
        for(int k=0;k<t;k++){
            nums1.pop_back();
            cout << k;
        }
    }
};