class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int ans =0; 
        int currFloor =0;
        int m = requests.size();
        for(int i=0; i<m; i++){
            ans += abs(requests[i] -currFloor);
            currFloor = requests[i];

        }
        return ans;
        
    }
};