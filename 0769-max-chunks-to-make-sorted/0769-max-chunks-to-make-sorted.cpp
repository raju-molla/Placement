class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int mx = 0;
        int chk = 0;
        for(int i = 0; i < arr.size(); i++){
            mx = max(arr[i],mx);
            if(mx == i){
                chk++;
            }
        }
        return chk;
    }
};