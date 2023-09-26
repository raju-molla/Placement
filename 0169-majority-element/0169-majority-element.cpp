class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>m;
        for(auto it: nums){
            m[it]++;
        }
        int res = 0;
        int ans = -1;
        for(auto it: m){
            int p = it.second;
            if(res<p){
                ans = it.first;
                res = p;
            }
        }
        return ans;
    }
};