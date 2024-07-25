class Solution {
public:
    void Merge(vector<int>& nums, int low, int mid, int high){
        vector<int> temp;
        int left = low;
        int right = mid + 1;
        while(left <= mid && right <= high){
            if(nums[left] <= nums[right]){
                temp.push_back(nums[left]);
                left++;
            }
            else{
                temp.push_back(nums[right]);
                right++;
            }
        }

        while(left <= mid){
            temp.push_back(nums[left]);
            left++;
        }
        while(right <= high){
            temp.push_back(nums[right]);
            right++;
        }

        for(int i = low; i<=high; i++){
            nums[i] = temp[i - low];
        }
    }
    void MergeSort(vector<int>& nums, int low, int high){
        if(low == high) return;
        int mid = (high + low)/2;
        MergeSort(nums, low, mid);
        MergeSort(nums, mid + 1, high);
        Merge(nums, low, mid, high);
    }
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        MergeSort(nums, 0, n-1);
        return nums;
    }
};