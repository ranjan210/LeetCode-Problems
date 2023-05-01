class TrieNode{
    public:
        TrieNode* children[26]={};
        bool wordCount;
        TrieNode() {
        for(int i=0;i<25;i++){
            children[i]=nullptr;
        }
        wordCount = false;
    }
};

class Trie {
public:

    TrieNode* root;
    Trie(){
        root = new TrieNode();
    }
    
    void insert(string word) {
        TrieNode* current = root;
        for(auto c:word){
            int index = c - 'a';
            if(current->children[index]==NULL ){
                current->children[index] = new TrieNode();
            }
            current = current->children[index];
        }
        current->wordCount += 1;
    }
    
    bool search(string word) {
        TrieNode* current = root;
        for(auto c:word){
            int index = c - 'a';
            if(current->children[index]==NULL){
                return false;
            }
            current = current->children[index];
        }
        if(current->wordCount == 0){
            return false;
        }
        return true;
    }
    
    bool startsWith(string prefix) {
        TrieNode* current = root;
        for(auto c:prefix){
            int index = c - 'a';
            if(current->children[index]==NULL){
                return false;
            }
            current = current->children[index];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */