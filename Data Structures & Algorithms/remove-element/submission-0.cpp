class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        // vector<int> nums2;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == val) {
                nums[i] = 200;
                k++;
            }
        }

        sort(nums.begin(), nums.end());


        // for (int i = 0; i < nums.size(); i++) {
        //     if (nums[i] != 0) {
        //         nums2.push_back(nums[i]);
        //     }
        // }

        // for (int i = 0; i < nums2.size(); i++) {
        //     nums[i] = nums2[i];
        // }

        while (k != 0){
            nums.pop_back();
            k--;
        }

        k = nums.size();

        return k;
    }
};