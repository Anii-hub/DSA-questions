#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int maxi = 0;

        for(int num : st){
            if(st.find(num - 1) == st.end()){
                int current = num;
                int count = 1;

                while(st.find(current + 1) != st.end()){
                    current++;
                    count++;
                }

                maxi = max(maxi, count);
            }
        }

        return maxi;
    }
};

int main() {
    Solution obj;
    int n;

    cout << "Enter size: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
        cin >> nums[i];

    cout << "Longest Consecutive Length: "
         << obj.longestConsecutive(nums);

    return 0;
}
