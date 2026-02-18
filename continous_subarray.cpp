#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        mp[0] = -1;

        int sum = 0;

        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];

            if(k != 0)
                sum %= k;

            if(mp.find(sum) != mp.end()){
                if(i - mp[sum] >= 2)
                    return true;
            } else {
                mp[sum] = i;
            }
        }

        return false;
    }
};

int main() {
    Solution obj;
    int n, k;

    cout << "Enter size: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
        cin >> nums[i];

    cout << "Enter k: ";
    cin >> k;

    if(obj.checkSubarraySum(nums, k))
        cout << "True";
    else
        cout << "False";

    return 0;
}
