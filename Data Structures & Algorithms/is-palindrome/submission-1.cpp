class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        int n = s.length();

        for(int i = 0; i < n; i++){
            if(s[i] == ' ' || !isalnum(s[i])){
                continue;
            }
            str += tolower(s[i]);
        }

        cout << str << endl;
        string rev = str;
        reverse(rev.begin(), rev.end());
        cout << rev << endl;
        return (str == rev);
    }
};
