class TrieNode{
    public:
        TrieNode* children[26]={};
        bool wordCount;
        TrieNode() {
        wordCount = false;
        }
};

bool searchHelper(string currWord,int i,TrieNode* current){
            if(!current->wordCount && i==currWord.size()){
                return false;
            }
            if(current->wordCount && i==currWord.size()){
                return true;
            }
            char c = currWord[i];
            int index = c - 'a';
            if(index == -51){
                for(int k=0;k<26;k++){
                    if(current->children[k] != NULL){
                        bool ans = searchHelper(currWord,i+1,current->children[k]);
                        if(ans){
                            return true;
                        }              
                    }
                }
                return false;
            }
            else{
                if(current->children[index]==NULL){
                    return false;
                }
                return searchHelper(currWord,i+1,current->children[index]);     
            }

}

class WordDictionary {
public:
    TrieNode* root;
    WordDictionary() {
        root = new TrieNode();
    }
    
    void addWord(string word) {
        TrieNode* current = root;
        for(auto c:word){
            int index = c - 'a';
            if(current->children[index]== NULL ){
                current->children[index] = new TrieNode();
            }
            current = current->children[index];
        }
        current->wordCount = true;
    }
    

    bool search(string word) {
        TrieNode* current = root;
        return searchHelper(word,0,current);
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */