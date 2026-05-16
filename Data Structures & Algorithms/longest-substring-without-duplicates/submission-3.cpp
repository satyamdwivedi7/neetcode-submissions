class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int> window;

        int left = 0;
        int maxLength = 0;

        for(int right = 0; right < s.length(); right++){

            while(window.count(s[right])){
                window.erase(s[left]);
                left++;
            }

            window.insert(s[right]);

            maxLength = max(maxLength, right - left + 1);
        }
        return maxLength;
    }
};
