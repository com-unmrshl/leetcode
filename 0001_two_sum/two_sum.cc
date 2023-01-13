/**
 * https://github.com/unmrshl
 */

#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::vector<int> solution;
        std::unordered_map<int, int> observed;
        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            if (auto search = observed.find(target - num); search != observed.end()) {
                solution.push_back(search->second);
                solution.push_back(i);
                break;
            }
            observed[num] = i;
        }
        return solution;
    }
};

