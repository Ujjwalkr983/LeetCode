class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // vector<vector<int>> ans;
        // set<vector<int>> st;
        // for(int i = 0; i<nums.size(); i++){
        //     unordered_map<int, int> mp;
        //     for(int j = i+1; j<nums.size(); j++){
        //         if(mp.find(-(nums[i] +nums[j])) != mp.end()){
        //             vector<int> temp = {nums[i], nums[j], -(nums[i] +nums[j])};
        //             sort(temp.begin(), temp.end());
        //             st.insert(temp);
        //         }
        //         mp[nums[j]]++;
        //     }
        // }
        // for(auto it: st)ans.push_back(it);
        // return ans;

        vector<vector<int>> ans;
        sort(begin(nums), end(nums));
        for(int i = 0; i<nums.size(); i++){
            if(i>0 && nums[i] == nums[i-1]) continue;
            int j = i + 1;
            int k = nums.size() - 1;
            while(j < k){
                if(nums[i] + nums[k] + nums[j] == 0) {
                    ans.push_back({nums[i], nums[k], nums[j]});
                    k--; j++;
                    while(j<k && nums[j] == nums[j-1]) j++;
                    while(j<k && nums[k] == nums[k+1]) k--;
                }
                else if(nums[i] + nums[k] + nums[j] > 0) k--;
                else if(nums[i] + nums[k] + nums[j] < 0) j++;
            }
        }
        return ans;
    }
};