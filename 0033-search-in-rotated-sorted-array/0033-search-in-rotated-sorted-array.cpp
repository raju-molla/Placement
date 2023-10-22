class Solution {
public:
    int search(vector<int>& nums, int target) {
        int ans = 0;
        bool flag = false;
        for(auto it: nums){
            if(it==target){
                flag = true;
                break;
            }
            ans++;
        }
        
        return (flag?ans:-1);
    }
};