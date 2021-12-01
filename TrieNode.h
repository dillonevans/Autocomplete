#ifndef TRIENODE_H
#define TRIENODE_H

#include <vector>
#include <string>
#define ALPHABET_SIZE 26

class TrieNode
{
public:
    TrieNode(std::string text);
    TrieNode* addChar(char c);
    std::vector<TrieNode*> children;
    std::string text;

private:
};

#endif