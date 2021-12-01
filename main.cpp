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

    for (const auto& suggestion : t.getCompletions("p"))
    {
        std::cout << "Possible auto completion: " << suggestion << "\n";
    }

    return 0;
}