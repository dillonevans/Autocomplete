#ifndef TRIE_H
#define TRIE_H
#include <string>
#include "TrieNode.h"

class Trie
{
public:
    Trie();
    void insert(const std::string& word);
    bool contains(const std::string& word);
    std::vector<std::string> getCompletions(const std::string& word);

private:
    TrieNode* root;
    void getCompletions(TrieNode* root, std::vector<std::string>& suggestions);
    TrieNode* find(const std::string& word);
};
#endif