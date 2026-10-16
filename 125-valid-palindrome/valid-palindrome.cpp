class Solution {
public:

    bool isalnum(char ch){
        if((ch >= '0'&& ch<='9') || (tolower(ch)>='a' && tolower(ch) <='z')) {
            return true;
            }
            return 0;
    }
    bool isPalindrome(std::string s) {
        int st = 0;
        int end = s.length() - 1;
 
        while (st < end) {
            while (st < end && ! isalnum(s[st])) {
                st++;
            }
            while (st < end && ! isalnum(s[end])) {
                end--;
            }
            if (st < end && tolower(s[st]) != tolower(s[end])) {
                return false;
            }
            st++;
            end--;
        }

        return true; 
    }
};