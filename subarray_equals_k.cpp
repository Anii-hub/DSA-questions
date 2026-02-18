#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        int count = 0;
        int presum = 0;

        mpp[0] = 1;  // important

        for(int num : nums){
            presum += num;

            if(mpp.find(presum - k) != mpp.end())
                count += mpp[presum - k];

            mpp[presum]++;
        }
        return count;
    }
};

int main() {
    Solution obj;
    int n, k;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
        cin >> nums[i];

    cout << "Enter value of k: ";
    cin >> k;

    int result = obj.subarraySum(nums, k);

    cout << "Number of subarrays with sum = k: " << result;

    return 0;
}
