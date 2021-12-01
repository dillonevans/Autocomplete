#include "TrieNode.h"
#include <iostream>

TrieNode::TrieNode(std::string text) : children(ALPHABET_SIZE)
{
    this->text = text;
}

TrieNode* TrieNode::addChar(char c)
{
    int index = c - 'a';

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