class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int pos = 0;
        int length = nums.size();
        
        for (int i: nums) {
            if (i!=0) {
                nums[pos++] = i;
            }
        }
        for(pos;pos<length;pos++) {
            nums[pos] = 0;
        }
    }
};