// A C++ implementation of Trie(prefix tree) data structure

class Trie {
public:
    /* Initializing the Trie data structure */
    Trie *children[26]; /* Since the trie supports lowerCase alphabets we have 26 children(a to z) */
    bool isEnd; /* boolean flag to check if a word ends at current node */
    Trie() {
        
        int i;
        for(i=0;i<26;i++)
        {
            this->children[i]=NULL;
        }
        this->isEnd=0;
    }
    
    /* Inserting a word into the trie. */
    void insert(string word) {
        int i,pos;
        Trie *curr=this;
        for(i=0;i<word.size();i++)
        {
            pos=word[i]-'a';
            if(curr->children[pos]==NULL)curr->children[pos]=new Trie;
            curr=curr->children[pos];
        }
        curr->isEnd=1;
    }
    
    /* Returns if the word is in the trie. */
    bool search(string word) {
        
        Trie *curr=this;
        int i,pos;
        for(i=0;i<word.size();i++)
        {
            pos=word[i]-'a';
            if(!curr->children[pos])return 0;
            curr=curr->children[pos];
        }
        return(curr!=NULL and curr->isEnd);
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        Trie *curr=this;
        int i,pos;
        for(i=0;i<prefix.size();i++)
        {
            pos=prefix[i]-'a';
            if(!curr->children[pos])return 0;
            curr=curr->children[pos];
        }
        return(curr!=NULL);
    }
};

/**
 * Trie object can be instantiated and called as such:
 * Trie* trie_Object = new Trie();
 * trie_Object->insert(word);
 * bool is_Present = obj->search(word);
 * bool starts_With = obj->startsWith(prefix);
 */
