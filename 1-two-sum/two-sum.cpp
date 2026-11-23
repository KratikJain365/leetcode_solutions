class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();  //BRUTE FORCE
        // for (int i = 0; i < n; i++) {
        //     for (int j = i + 1; j < n; j++) {
        //         if (nums[i] + nums[j] == target) {
        //             return {i, j}; 
        //         }
        //     }
        // }
        // return {};

        // sort(nums.begin(), nums.end()); //BETTER APPROACH //O(nlogn) // iss aproach mai ek cheez hai jispe dhyaan dena hoga, ki jab hum sorting kar denge aur hame return akrne hai , indexes, lekin sorting ke baad to wo change ho jayenge, usko dekhna padega
        // int start = 0;
        // int end = n-1;
        // while(start <= end){
        //     int sum = nums[start] + nums[end];
        //     if(sum == target){
        //         return {};
        //     }
        //     else if(sum < target){
        //         start++;
        //     }
        //     else{
        //         end--;
        //     }

        // }
        // return {};

    unordered_map<int , int> m;
    vector<int> ans;

    for(int i=0; i<n; i++){
        int first = nums[i];
        int second = target - first;
        if(m.find(second) != m.end()){
            ans.push_back(i);//i ki value ko map mai daalenge
            ans.push_back(m[second]); //aur value ka index bhi ans mai store karaenge
            break;
        }
        else{
            m[first] = i; //agar second wali value map mai nhi mili to first wali value ko  map mai store karana hoga
        }
    }
    return ans;
         
    }
};