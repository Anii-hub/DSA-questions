class Solution {
public:
    string minWindow(string s, string t) {
        if(s.size() < t.size()) return "";

        unordered_map<char,int> mpp;
        for(char c : t) {
            mpp[c]++;
        }

        int left = 0;
        int right = 0;
        int count = 0; 
        int minLen = INT_MAX;
        int startIndex = 0;

        while(right < s.size()) {

            if(mpp[s[right]] > 0) {
                count++;
            }
            mpp[s[right]]--;

            
            while(count == t.size()) {

                if(right - left + 1 < minLen) {
                    minLen = right - left + 1;
                    startIndex = left;
                }

                mpp[s[left]]++;

                if(mpp[s[left]] > 0) {
                    count--;
                }

                left++;
            }

            right++;
        }

        return minLen == INT_MAX ? "" : s.substr(startIndex, minLen);
    }
};