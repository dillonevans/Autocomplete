#include "Trie.h"
#include <cassert>

int main()
{
    Trie t;
    t.insert("world");
    t.insert("wide");
    t.insert("web");

    assert(t.contains("world"));
    assert(t.contains("wide"));
    assert(t.contains("web"));
    return 0;
}