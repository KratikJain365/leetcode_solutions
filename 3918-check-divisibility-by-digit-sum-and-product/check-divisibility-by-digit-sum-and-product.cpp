class Solution {
public:
    bool checkDivisibility(int n) {
        int temp = n;
        int sum =0;
        int product =1;
        int digit;
        while(n>=1){
            digit= n%10;
            n=n/10;
            sum+=digit;
            product*=digit;
            }
            int ans;
            ans=(sum+ product);
            if(temp%ans==0){
                return true;
            }
            else{
                return false;
            }
        
    }
};