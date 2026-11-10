class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == val) {
                nums[i] = 200;
                k++;
            }
        }
        sort(nums.begin(), nums.end());
        while (k != 0){
            nums.pop_back();
            k--;
        }

        return k = nums.size();
    }
};