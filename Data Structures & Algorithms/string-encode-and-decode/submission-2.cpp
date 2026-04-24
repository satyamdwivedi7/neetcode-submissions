class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded = "";
        for(int i = 0; i < strs.size(); i++){
            encoded += strs[i] + "~";
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> decoded;
        string word = "";
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '~'){
                decoded.push_back(word);
                word = "";
                continue;
            }
            word += s[i];
        }
        return decoded;
    }
};
