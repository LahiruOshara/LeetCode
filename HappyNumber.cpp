class Solution {
    
    int func(int n) {
        int sum = 0;
        
        while(n){
            int digit = n%10;
            n/=10;
            sum+=digit*digit;
        }
        return sum;
        
        
    }
public:
    bool isHappy(int n) {
        
        unordered_set<int> checked;
        
        while(true) {
            if(n==1){
                return true;
            }
            n=func(n);
            if(checked.count(n)==1) {
                return false;
            }
            checked.insert(n);
        }
    }
};