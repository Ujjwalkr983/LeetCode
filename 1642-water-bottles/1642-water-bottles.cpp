class Solution {
public:
    int numWaterBottles(int nb, int d) {
        int ans = nb;
        while(nb >= d){
            ans += nb / d;
            nb = nb/d + nb%d;
        }
        return ans;
    }
};