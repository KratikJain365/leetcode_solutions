class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int n = arr.size();
        long long count = 0;
        int odd =0;
        int even =1;
        int sum =0;
        for(int i=0; i<n; i++){
            sum += arr[i];
            if(sum%2 != 0){// sum odd hai
                count += even; //even add karne pe hi odd milega, odd+even= odd hota hai
                odd++;
            }
            else{
                count += odd;
                even++;
            }
        }
        int mod= 1e9 +7;
        return count % mod;
    }
};