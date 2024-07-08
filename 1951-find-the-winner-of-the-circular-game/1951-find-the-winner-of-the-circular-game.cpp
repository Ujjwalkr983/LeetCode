class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> boy;
        for(int i = 0; i<n; i++) boy.push_back(i+1);
        int ind = 0;
        while(boy.size()>1){
            ind = (ind + k - 1) % boy.size();
            boy.erase(boy.begin() + ind);
        }
        return boy[0];
    }
};