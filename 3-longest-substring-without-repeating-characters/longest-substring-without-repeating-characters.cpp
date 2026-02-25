class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         int n=s.size();
        int j=0;
        int maxi=0;
        unordered_set<char> st;
       
        for(int i=0;i<n;i++){
            while(st.find(s[i])!=st.end()){
                st.erase(s[j]);
                j++;
            }
            st.insert(s[i]);
            maxi=max(maxi,i-j+1);
        }
        return maxi;
    }
};