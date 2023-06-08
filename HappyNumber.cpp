class Solution {
public:
    bool isHappy(int n) {
        long sum = n;
        set<int> set1;
        set1.insert(n);
        while(sum != 1){
            int copy = sum;
            set1.insert(sum);
            sum = 0;
            while(copy > 0){
                long rem = copy % 10;
                sum += (rem*rem);
                copy /= 10;
            }
            if(set1.find(sum)!=set1.end()){
                return false;
            }
            set1.insert(sum);
        }
        return true;
    }
};