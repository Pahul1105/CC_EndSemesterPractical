class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> freq(128,0);
        int left = 0, maxLen = 0;
        for (int r=0;r<s.length();r++) {
            freq[s[r]]++;
            while (freq[s[r]]>1) {
                freq[s[left]]--;
                left++;
            }
            maxLen = max(maxLen,r-left+1);
        }
        return maxLen;
    }
};


