#ifndef TRIE_H
#define TRIE_H
#include <string>
#include "TrieNode.h"

class Trie
{
public:
    Trie();
    void insert(std::string word);
    bool contains(std::string word);
private:
    TrieNode* root;
};
#endif