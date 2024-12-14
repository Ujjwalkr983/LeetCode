class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        string s = to_string(x); int a = 0;
        for(auto it: s) a += (it-'0');
        if(x%a == 0) return a; return -1;
    }
};