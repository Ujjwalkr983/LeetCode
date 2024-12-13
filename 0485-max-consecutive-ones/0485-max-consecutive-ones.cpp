class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) {
        int n = arr.size();
        int ans = 0, cnt = 0;
        for(int i = 0; i<n; i++){
            if(arr[i] != 1){
                ans = max(ans, cnt);
                cnt = 0;
            }
            else if(arr[i] == 1){
                cnt++;
            }
        }
        ans = max(ans, cnt);
        return ans;
    }
};