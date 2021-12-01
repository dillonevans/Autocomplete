#include "Trie.h"
#include <cassert>
#include <iostream>

int main()
{
    Trie t;
    t.insert("peter");
    t.insert("piper");
    t.insert("picked");
    t.insert("a");
    t.insert("pickeled");
    t.insert("pepper");

    auto a = "peter";
    assert(t.contains(a));

    a = "piper";
    assert(t.contains(a));

    for (const auto& suggestion : t.getCompletions("p"))
    {
        std::cout << "Possible auto completion: " << suggestion << "\n";
    }

    return 0;
}