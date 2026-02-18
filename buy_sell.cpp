#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int ans = 0;

        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                ans = max(prices[j] - prices[i], ans);
            }
        }

        return ans;
    }
};

int main() {
    Solution obj;

    int n;
    cout << "Enter number of days: ";
    cin >> n;

    vector<int> prices(n);
    cout << "Enter stock prices: ";
    for(int i = 0; i < n; i++){
        cin >> prices[i];
    }

    int result = obj.maxProfit(prices);

    cout << "Maximum Profit: " << result << endl;

    return 0;
}
