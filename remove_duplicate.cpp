#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;

        int j = 0;
        for(int i = 1; i < n; i++){
            if(nums[i] != nums[j]){
                nums[j+1] = nums[i];
                j++;
            }
        }
        return j + 1;
    }
};

int main() {
    Solution obj;
    int n;

    cout << "Enter size: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter sorted elements: ";
    for(int i = 0; i < n; i++)
        cin >> nums[i];

    int k = obj.removeDuplicates(nums);

    cout << "Unique count: " << k << endl;
    cout << "Array after removing duplicates: ";
    for(int i = 0; i < k; i++)
        cout << nums[i] << " ";

    return 0;
}
