class Solution {
public:

    string findroot(string &word, unordered_set<string> st){
        for(int i = 1; i<word.size(); i++){
            string root = word.substr(0, i);
            if(st.count(root)) return root;
        }
        return word;
    }
    string replaceWords(vector<string>& dick, string sen) {
        unordered_set<string> st(dick.begin(), dick.end());
        stringstream ss(sen);
        string word, result;

        while(getline(ss, word, ' ')){
            result += findroot(word, st) + " ";
        }
        result.pop_back();
        return result;
    }
};