#include "Trie.h"
#include <iostream>
#include <string>
Trie::Trie() : root{ new TrieNode("") } {}

void Trie::insert(std::string word)
{
    int index = 0;
    TrieNode* node = (this->root);
    for (const char& c : word)
    {
        node = node->addChar(c);
    }
}

bool Trie::contains(std::string word)
{
    int index = 0;
    TrieNode* node = (this->root);
    for (char c : word)
    {
        index = c - 'a';
        node = node->children[index];
        // If the pointer at this index is null, 
        // the word is not present in the trie
        if (!node) { return false; }
    }

    // If we were able to find the trie node
    // corresponding to each letter, then 
    // the word is present in the trie.
    return true;
}

