#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int ans = INT_MIN;
        int sum = 0;

        for(int i = 0; i < n; i++){
            sum += nums[i];
            ans = max(sum, ans);
            if(sum < 0){
                sum = 0;
            }
        }

        return ans;
    }
};

int main() {
    Solution obj;
    int n;

    cout << "Enter size: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    cout << "Maximum Subarray Sum: " << obj.maxSubArray(nums) << endl;

    return 0;
}
