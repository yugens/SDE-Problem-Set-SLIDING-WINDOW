// Time Complexity: O(n)
// Space Complexity: O(n)
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int maxLength = 0;
        int start = 0;
        map<char , int> mp;
        for(int i = 0; i < n; i++){
            if(mp.find(s[i]) != mp.end() and mp[s[i]] >= start){
                start = mp[s[i]] + 1;
            }
            mp[s[i]] = i;
            maxLength = max(maxLength , i - start + 1);
        }
        return maxLength;
    }
};