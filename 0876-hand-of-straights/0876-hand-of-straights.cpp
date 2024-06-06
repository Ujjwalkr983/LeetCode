class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int g) {
        // int n = hand.size();
        // if(n % g != 0) return false;
        // sort(hand.begin(), hand.end());

        // for(int i = 0; i<hand.size(); i++){

        //     int first = 0, a = 0;
        //     for(a = 0; a<hand.size(); a++){
        //         if(hand[a] != 0){
        //             first = hand[a]; hand[a]=0; break; 
        //         }
        //     } 

        //     int cnt = 1;

        //     for(int j = a+1; j<hand.size(); j++){
        //         if(hand[j] == ++first){ cnt++; hand[j] = 0;}
        //         if(cnt == g) break;
        //     }
        // }
        
        // for(auto it:hand) if(it != 0) return false;
        // return true;

        map<int, int> countMap;
        for (int card : hand) {
            countMap[card]++;
        }
        
        sort(hand.begin(), hand.end());
        
        for (int i = 0; i < hand.size(); i++) {
            if (countMap[hand[i]] == 0) {
                continue;
            }
            
            for (int j = 0; j < g; j++) {
                int currCard = hand[i] + j;
                
                if (countMap[currCard] == 0) {
                    return false;
                }
                
                countMap[currCard]--;
            }
        }
        
        return true;
    }
};