class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        int n = nums.size();
        int k =(n/3);
        map<int,int>m;
        for(auto it: nums){
            m[it]++;
        }
       
        
        for(auto it: m){
            if(it.second>k){
                ans.push_back(it.first);
            }
        }
        
       
        return ans;
    }
};