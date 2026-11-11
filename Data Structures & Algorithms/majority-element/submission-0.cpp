class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> map;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            map[nums[i]]++;
        }

        for (auto& [key, value] : map) {
            if (value > n/2) {
                return key;
            }
        }
    }
};