#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> mp;
        for(int i = 0; i < n; i++){
            int first = nums[i];
            int ans = target - first;
            if(mp.find(ans) != mp.end()){
                return {mp[ans], i};
            }
            mp[first] = i;
        }
        return {-1, -1};
    }
};

int main() {
    Solution sol;
    
   
    vector<int> nums1 = {2, 7, 11, 15};
    int target1 = 9;
    vector<int> result1 = sol.twoSum(nums1, target1);
    cout << "Test 1: [" << result1[0] << ", " << result1[1] << "]" << endl;
   
    return 0;
}