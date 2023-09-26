class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int mx1 = 1;
        int mx2 = 1;
        int res1 = INT_MIN;
        int res2 = INT_MIN;
        for(int i = 0; i < nums.size(); i++){
            if(mx1 == 0){
                mx1 = nums[i];
            }
            else{
                mx1 = mx1 * nums[i];
            }
            res1 = max(res1,mx1);
            
        }
        for(int i = nums.size()-1; i >=0; i--){
            if(mx2 == 0){
                mx2 = nums[i];
            }
            else{
                mx2 = mx2 * nums[i];
            }
            res2 = max(res2,mx2);    
        }
        return max(res1,res2);
    }
};