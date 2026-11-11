class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> map;
        int res = 0, max = 0;

        for (int num:nums) {
            map[num]++;

            if (map[num] > max) {
                res = num;
                max = map[num];
            }
        }
        return res;
    }
};