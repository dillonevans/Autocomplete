#include "TrieNode.h"

TrieNode::TrieNode(std::string text) : children(ALPHABET_SIZE)
{
    this->text = text;
    this->isLeaf = true;
}

TrieNode* TrieNode::addChar(char c)
{
    int index = c - 'a';
    this->isLeaf = false;
    if (!this->children[index])
    {
        TrieNode* child = new TrieNode(this->text + c);
        this->children[index] = child;
        return child;
    }
    else
    {
        return this->children[index];
    }
}