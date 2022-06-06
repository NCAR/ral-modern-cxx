//
// Created by Paul Prestopnik on 6/6/22.
//

// Back to Basics: Move Semantics (part 1 of 2) - Klaus Iglberger - CppCon 2019
// https://www.youtube.com/watch?v=St0MNEU5b0o

#include <vector>

int main()
{
    std::vector<int> v1 = {1, 2, 3, 4, 5};
    std::vector<int> v2{};

    v2 = v1;

    v2 = std::move(v1);

    // This is invalid!  Clion (Clang-tidy) warns me.
    v1[3] = 5;

}