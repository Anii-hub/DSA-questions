#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int j = 0;

        for(int i = 0; i < n; i++){
            if(nums[i] != 0){
                nums[j++] = nums[i];
            }
        }

        while(j < n){
            nums[j++] = 0;
        }
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

    obj.moveZeroes(nums);

    cout << "Array after moving zeroes: ";
    for(int x : nums)
        cout << x << " ";

    return 0;
}
