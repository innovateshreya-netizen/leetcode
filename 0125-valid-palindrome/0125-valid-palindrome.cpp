class Solution {
public:
    // Helper function - pass string by reference
    bool checkPalindrome(int i, const string& s) {
        if (i >= s.size() / 2) return true;
        
        if (s[i] != s[s.size() - i - 1]) {
            return false;
        }
        
        return checkPalindrome(i + 1, s);  // Ab copy nahi hoga
    }
    
    bool isPalindrome(string s) {
        string temp = "";
        
        for (char c : s) {
            if (isalnum(c)) {
                temp += tolower(c);
            }
        }
        
        return checkPalindrome(0, temp);  // Reference pass hoga
    }
};