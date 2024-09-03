class Solution {
public:
    int getLucky(string s, int k) {
        string num = "";
        for(auto it: s){
            num += (to_string(it - 'a' + 1));
        }
        cout<<num;

        while (k > 0) {
            int temp = 0;
            for (char ch : num) {
                temp += ch - '0';  // Sum the digits of the current number
            }
            num = to_string(temp);  // Convert the sum back to a string
            k--;
        }
        return stoi(num);
    }
};