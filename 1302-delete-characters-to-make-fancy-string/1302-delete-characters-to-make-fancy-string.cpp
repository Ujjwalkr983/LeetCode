class Solution {
public:
    string makeFancyString(string s) {
        string ans = "";
        char f = s[0]; int cnt = 0;
        for(int i = 0; i<s.size(); i++){
            if(s[i] == f){
                cnt++;
                if(cnt < 3) ans += s[i];
            }
            else{
                f = s[i];
                cnt = 1;
                ans += s[i];
            }
        }
        return ans;
    }
};