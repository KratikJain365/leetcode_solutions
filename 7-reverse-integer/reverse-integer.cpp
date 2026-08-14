class Solution {
public:
    int reverse(int x) {
        int rev =0;
        int num;
        while(x!=0){
            num=x%10;
            x=x/10;
            // check for overflow, agar value INT_MAX ki value se jyada ho jayegi to overflow ho jayega isiliye agar value badi hai to return 0; kr denge 
            if(rev>INT_MAX/10 || (rev==INT_MAX/10 && num>7)){  //num ka mtlb hai last digit.
                return 0;
            }
            // check for underflow agar value INT_MIN ki value se km ho jayegi to underflow ho jayega isiliye agar value choti hai to return 0; kr denge
            if(rev<INT_MIN/10 || (rev==INT_MIN/10 && num<-8)) {//num ka mtlb hai last digit.
                return 0;
            }
        rev=rev*10+num;
    }
        return rev;
        }
};