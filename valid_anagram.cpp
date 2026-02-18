#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;

        int freq[26] = {0};

        for(char c : s) freq[c - 'a']++;
        for(char c : t){
            if(--freq[c - 'a'] < 0)
                return false;
        }

        return true;
    }
};

int main() {
    Solution obj;
    string s, t;

    cout << "Enter first string: ";
    cin >> s;
    cout << "Enter second string: ";
    cin >> t;

    if(obj.isAnagram(s, t))
        cout << "Anagram";
    else
        cout << "Not Anagram";

    return 0;
}
