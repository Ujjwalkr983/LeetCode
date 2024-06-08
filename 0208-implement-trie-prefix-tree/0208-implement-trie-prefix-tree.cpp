class Trie {
public:
    
    struct trieNode{
        bool isEndOfWord;
        trieNode * child[26];
    };

    trieNode* getNode(){
        trieNode* newNode = new trieNode();
        newNode->isEndOfWord = false;

        for(int i = 0; i<26; i++){
            newNode->child[i] = NULL;
        }

        return newNode;
    }

    trieNode* root;

    Trie() {
        root = getNode();
    }
    
    void insert(string word) {
        trieNode* crawler = root;

        for(int i = 0; i<word.size(); i++){
            char ch = word[i];
            int idx = ch - 'a';

            if(crawler->child[idx] == NULL){
                crawler->child[idx]= getNode();
            }

            crawler = crawler->child[idx];
        }
        crawler->isEndOfWord = true;
    }
    
    bool search(string word) {
        trieNode* crawler = root;

        for(int i = 0; i<word.size(); i++){
            char ch = word[i];
            int idx = ch - 'a';

            if(crawler->child[idx] == NULL){
                return false;
            }

            crawler = crawler->child[idx];
        }
        if(crawler != NULL && crawler->isEndOfWord ==  true) return true;
        return false;
    }
    
    bool startsWith(string prefix) {
        trieNode* crawler = root;
        int i = 0;
        for(; i<prefix.size(); i++){
            char ch = prefix[i];
            int idx = ch - 'a';

            if(crawler->child[idx] == NULL){
                return false;
            }

            crawler = crawler->child[idx];
        }
        if(i == prefix.length()) return true;
        return false;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */