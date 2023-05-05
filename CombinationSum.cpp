class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        // if current Sum goes above target, the current path is terminated
        vector<vector<int>> v;
        sort(candidates.begin(),candidates.end());
        for(int i=0;i<candidates.size();i++){
            vector<int> sol = {candidates[i]};
            checkPath(v,candidates[i],target,sol,candidates,i);
        }  
        return v;
    }

    void printSol(vector<int>& v){
        for(auto item:v){
            std::cout << item << " ";
        }
        std::cout << endl;
    }

    void checkPath(vector<vector<int>>& v,int currentSum,int target,vector<int> sol,vector<int>& candidates,int i){
        if(currentSum > target){
            printSol(sol);
            return;
        }
        else if(currentSum == target){
            v.push_back(sol);
            return;
        }
        else{
            for(;i<candidates.size();i++){
                currentSum += candidates[i];
                sol.push_back(candidates[i]);
                checkPath(v,currentSum,target,sol,candidates,i);
                sol.pop_back();
                currentSum -= candidates[i];
            }  
        }
    }
};