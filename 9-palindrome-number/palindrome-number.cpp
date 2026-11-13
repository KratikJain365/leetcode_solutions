class Solution {
public:

int Reverse(int n){
    int RevNum =0;
    while(n != 0){
        int digit = n%10;

        if(RevNum > INT_MAX/10 || RevNum < INT_MIN/10){
            return 0;
        }
        RevNum = (RevNum *10) + digit;
        n = n/10;
        
    }
    return RevNum;
};
    bool isPalindrome(int n) {
        if(n<0){
            return false;
        }

        int RevNum = Reverse(n);
            return n == RevNum;// will return true or false
        }
};