class Solution {
    public int maxSum(int[] nums) {
        int n = nums.length;
        int sum = 0;
        Set<Integer> st = new HashSet<>();
        
        for (int i = 0; i < n; i++) {
            st.add(nums[i]);
        }

        int maxNegative = Integer.MIN_VALUE;

        for (int num : st) {
            if (num > 0) {
                sum += num;
            } else {
                maxNegative = Math.max(maxNegative, num);
            }
        }

        return sum == 0 ? maxNegative : sum;
    }
}
