#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap; // value -> index

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            if (numMap.find(complement) != numMap.end()) {
                return {numMap[complement], i}; // Found the pair
            }

            numMap[nums[i]] = i; // Store current value and index
        }

        return {}; // No solution found (shouldn't happen as per constraints)
    }
};