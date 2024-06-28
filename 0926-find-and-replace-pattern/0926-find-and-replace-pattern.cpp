class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string p) {
        vector<string> ans;


        for(int i = 0; i<words.size(); i++){
            unordered_map<char, char> mp;
            bool check = true;
            set<char> st;
            // pehla map m pattern ka dusra m checking ka
            for(int j = 0; j<p.size(); j++){
                if(mp.find(p[j]) != mp.end()){
                    if(mp[p[j]] != words[i][j]){ 
                        check =  false; break;
                    }
                }
                else{
                    if(st.find(words[i][j]) != st.end()){
						check=false;
						break;
					}
                    mp[p[j]] = words[i][j];
					st.insert(words[i][j]);
                }
            }

            if(check == true){
                ans.push_back(words[i]);
            }
        }

        return ans;
    }
};