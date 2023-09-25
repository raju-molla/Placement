class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mx = 0;
        int res = INT_MIN;
        for(int i = 0; i < nums.size(); i++){
            if(mx < 0) mx= nums[i];
            else mx = mx + nums[i];
            res = max(res, mx);
        }
        return res;
        
    }
};