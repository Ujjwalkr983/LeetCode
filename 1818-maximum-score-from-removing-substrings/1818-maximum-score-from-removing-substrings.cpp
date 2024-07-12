class Solution {
public:
    int maximumGain(string s, int x, int y) {
        vector<char> v,v1; // These are used as stacks
        int ans=0;
        int f; // Used as Flag
        if(x>y){
            f=1;
        }
        else{
            f=0;
        }
        for(auto ch:s){
            if(!v.empty()){
                if(f){
                    if(v.back()=='a' && ch=='b'){
                        ans+=x;
                        v.pop_back();
                    }
                    else{
                        v.push_back(ch);
                    }
                }
                else{
                    if(v.back()=='b' && ch=='a'){
                        ans+=y;
                        v.pop_back();
                    }
                    else{
                        v.push_back(ch);
                    }
                }
            }
            else{
                v.push_back(ch);
            }
        }
        for(auto ch:v){
              if(!v1.empty()){
                if(!f){
                    if(v1.back()=='a' && ch=='b'){
                        ans+=x;
                        v1.pop_back();
                    }
                    else{
                        v1.push_back(ch);
                    }
                }
                else{
                    if(v1.back()=='b' && ch=='a'){
                        ans+=y;
                        v1.pop_back();
                    }
                    else{
                        v1.push_back(ch);
                    }
                }
            }
            else{
                v1.push_back(ch);
            }
        }
        return ans;
        
    }
};