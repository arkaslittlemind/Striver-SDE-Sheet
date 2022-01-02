Question Link- https://leetcode.com/problems/maximum-subarray/

// Not using Kadane's Algorithm //

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       
        int maxi = INT_MIN;
        
        for(int i = 0; i < nums.size(); i++){
          int sum = 0;
            for(int j = i; j < nums.size(); j++)
            {
                sum += nums[j];
                maxi = max(sum, maxi);
            } 
        }
        return maxi;
    }
};

-------------------------------------------------------------------------------
// Using Kadane's Algorithm //
  
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxi = INT_MIN;
        
       for(auto it: nums) {
           sum += it;
           maxi = max(sum, maxi);
          if(sum < 0) sum = 0;
       }
        return maxi;
    }
};  
