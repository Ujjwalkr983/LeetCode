class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        long long sum = 0, i = 0, j = 0, ans = INT_MIN;
        while(j < arr.size()){
            sum += arr[j];
            ans = max(ans, sum);
            if(sum < 0){
                while(sum < 0){
                    sum -= arr[i];
                    i++;
                }
            }
            j++;
        }
        return ans;
    }
};