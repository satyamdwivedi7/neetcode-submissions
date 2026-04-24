class Solution {
public:
    bool checkAnagram(string s, string t){
        if(s.length() != t.length()){
            return false;
        }
        unordered_map<char, int> count1;
        unordered_map<char, int> count2;

        for(int i = 0; i < s.length(); i++){
            count1[s[i]]++;
            count2[t[i]]++;
        }

        if(count1 == count2){
            return true;
        }
        return false;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> collection;
        vector<string> group;
        int n = strs.size();
        vector<bool> flag(n, false);
        for(int i = 0; i < n; i++){
            if(flag[i] == false){
                flag[i] = true;
                group.push_back(strs[i]);
            }
            for(int j = 0; j < n; j++){
                if(i == j || flag[j] == true){
                    continue;
                }
                if(checkAnagram(strs[i], strs[j])){
                    flag[j] = true;
                    group.push_back(strs[j]);
                }
            }
            if(!group.empty()){
                collection.push_back(group);
            }
            group.clear();
        }
        return collection;
    }
};
