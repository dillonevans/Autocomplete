#include "Trie.h"
#include <iostream>
#include <string>
Trie::Trie() : root{ new TrieNode("") } {}

void Trie::insert(const std::string& word)
{
    TrieNode* node = (this->root);
    for (const char& c : word)
    {
        node = node->addChar(c);
    }
}

bool Trie::contains(const std::string& word)
{
    // This is shorthand for return find(word) == nullptr;
    return find(word);
}

std::vector<std::string> Trie::getCompletions(const std::string& prefix)
{
    // If the root could be found
    if (root = find(prefix))
    {
        std::vector<std::string> suggestions;
        getCompletions(root, suggestions);
        return suggestions;
    }
    else
    {
        return {};
    }
}

void Trie::getCompletions(TrieNode* root, std::vector<std::string>& suggestions)
{
    if (!root) { return; }
    if (root->isLeaf) { suggestions.push_back(root->text); }
    for (const auto& node : root->children) { getCompletions(node, suggestions); }
}

TrieNode* Trie::find(const std::string& word)
{
    int index = 0;
    TrieNode* node = (this->root);
    for (const char& c : word)
    {
        index = c - 'a';
        node = node->children[index];
        // If the pointer at this index is null, 
        // the word is not present in the trie
        if (!node) { return nullptr; }
    }

    // If we were able to find the trie node
    // corresponding to each letter, then 
    // the word is present in the trie.
    return node;
}
