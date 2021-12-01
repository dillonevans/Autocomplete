#ifndef TRIENODE_H
#define TRIENODE_H

#include <vector>
#include <string>
#define ALPHABET_SIZE 26

class TrieNode
{
    friend class Trie;
public:
    TrieNode(std::string text);
    TrieNode* addChar(char c);

private:
    std::vector<TrieNode*> children;
    std::string text;
    bool isLeaf;
};

#endif