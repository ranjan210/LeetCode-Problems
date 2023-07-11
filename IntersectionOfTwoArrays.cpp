class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> m;
        unordered_map<int,int> n;
        vector<int> v;
        for(auto& it: nums1){
            m[it] +=1;
        }
        for(auto& it: nums2){
            n[it] +=1;
        }
        for(auto it : m){
            if(n.find(it.first)!=n.end()){
                int t = min(n[it.first],m[it.first]);
                for(int i=0;i<t;i++){
                    v.push_back(it.first);
                }
            }
        }
        return v;
    }
};