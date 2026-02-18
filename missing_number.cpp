#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;

        for(int i = 0; i <= n; i++)
            ans ^= i;

        for(int i = 0; i < n; i++)
            ans ^= nums[i];

        return ans;
    }
};

int main() {
    Solution obj;
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter numbers (0 to n with one missing): ";
    for(int i = 0; i < n; i++)
        cin >> nums[i];

    cout << "Missing number is: " << obj.missingNumber(nums);

    return 0;
}
