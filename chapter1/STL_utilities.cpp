//
// Created by Paul Prestopnik on 4/12/22.
//
#include <string>
#include <iostream>
#include <vector>

#define PRINTVEC(var) printVec(#var, var)


// simple helper function for debugging
template <typename T>
void printVec(const std::string& name, std::vector<T> vec){
    std::cerr << name << ": ";
    for (const auto& e: vec)
        std::cerr << e << ' ';
    std::cerr << std::endl;
}

int main(){

    std::vector<int> vi = {3,4,5,6,7};
    printVec("vi", vi);
    PRINTVEC(vi);

    std::vector<std::string> vs = {"this", "is", "a", "test"};
    PRINTVEC(vs);
}

/*
 * prestop@asimov:~/git/ral-modern-cxx/chapter1$ g++ -std=c++14 STL_utilities.cpp -o STL_test
 * prestop@asimov:~/git/ral-modern-cxx/chapter1$ ./STL_test
 * vi: 3 4 5 6 7
 * vi: 3 4 5 6 7
 * vs: this is a test
 */