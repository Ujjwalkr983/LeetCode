class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int maxi = -1; 
        set<int> st;
        for(auto it: nums) {maxi = max(maxi, it); st.insert(it);}
        while(original <= maxi){
            if(st.find(original) != st.end()){
                original *= 2;
            }
            else break;
        }
        return original;
    }
};