The procedure for initializing this data strucutre would be as follows.
#### Explanation
Trie trie = new Trie(); <br />
trie.insert("apple"); <br />
trie.search("apple"); // This returns true because string "apple" is present in the Trie <br />
trie.search("app");   // This return false <br />
trie.startsWith("app"); // returns True <br />
trie.insert("app"); <br />
trie.search("app");     // returns True <br />
