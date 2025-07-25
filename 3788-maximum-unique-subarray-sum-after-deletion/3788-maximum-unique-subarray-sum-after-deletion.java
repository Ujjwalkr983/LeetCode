class Solution {
    public int maxSum(int[] nums) {
        Arrays.sort(nums);
        int n = nums.length;
        int ans = nums[n - 1];

        Map<Integer, Integer> mp = new HashMap<>();
        mp.put(nums[n - 1], 1);

        for (int it : nums) {
            if (it <= 0) continue;
            if (mp.containsKey(it)) continue;
            ans += it;
            mp.put(it, 1);
        }

        return ans;
    }
}
