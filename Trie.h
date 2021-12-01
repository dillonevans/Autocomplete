#ifndef TRIE_H
#define TRIE_H
#include <string>
#include "TrieNode.h"

class Trie
{
public:
    Trie();
    /**
     * @brief Insert a word into the Trie
     * @param word The word to insert
    */
    void insert(const std::string& word);

    /**
     * @param word The word to search for
     * @return true if the word is contained in the
     * Trie
     */
    bool contains(const std::string& word);

    /**
     * @brief Get the possible auto completions
     * 
     * @param prefix The word to generate auto completions for
     * @return A vector containing the words that can be completed given 
     * the prefix
     */
    std::vector<std::string> getCompletions(const std::string& prefix);

private:
    TrieNode* root;

    /**
     * @brief Generate the possible auto completions by storing
     * the text of leaf nodes reachable from the root in a vector
     * 
     * @param root The node to start searching from
     * @param suggestions The auto completion vector
     */
    void getCompletions(TrieNode* root, std::vector<std::string>& suggestions);

    /**
     * @param prefix The word to find the node for
     * @return A pointer to the tree node at the last letter
     * of the prefix
     */
    TrieNode* find(const std::string& prefix);
};
#endif