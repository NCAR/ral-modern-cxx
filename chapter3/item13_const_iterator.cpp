//
// Created by Paul Prestopnik on 1/31/22.
//

#include <vector>
#include <iostream>

int main()
{
    std::vector<int> vi = {1, 2, 3, 5};

    auto ix1 = vi.begin();
    auto ix2 = vi.cbegin();

    std::cout << *ix1 << std::endl;
    std::cout << *ix2 << std::endl;

    for(auto ix = vi.cbegin(); ix != vi.cend(); ix++){

    }

    for (auto ix : vi){

    }

    auto it = std::find(vi.cbegin(),vi.cend(), 1983); // and cend
    vi.insert(it, 1998);
}