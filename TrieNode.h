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

    /**
     * @brief Adds a child to the current node
     * 
     * @param c The character to add
     * @return A pointer to the child node stored at the index
     * corresponding to the
     */
    TrieNode* addChar(const char &c);

private:
    std::vector<TrieNode*> children;
    std::string text;
    bool isLeaf;
};

#endif