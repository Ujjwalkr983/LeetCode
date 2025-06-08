class Solution {
public:
    int maxFreqSum(string s) {
        map<char, int> mp1; int n1 = 0;
        map<char, int> mp2; int n2 = 0;
        for(auto it: s){
            if(it == 'a'|| it == 'e'|| it == 'i'|| it == 'o'|| it == 'u'){
                mp1[it]++;
                if(n1 < mp1[it]) n1 = mp1[it];
            }
            else{
                mp2[it]++;
                if(n2 < mp2[it]) n2 = mp2[it];
            }
        }
        return n1 + n2;
    }
};