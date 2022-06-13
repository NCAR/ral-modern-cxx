//
// Created by Paul Prestopnik on 6/6/22.
//

// Back to Basics: Move Semantics (part 1 of 2) - Klaus Iglberger - CppCon 2019
// https://www.youtube.com/watch?v=St0MNEU5b0o

#include <vector>

// https://www.youtube.com/watch?v=pIzaZbKUw2s
// Back to Basics: Move Semantics (part 2 of 2) - Klaus Iglberger - CppCon 2019

class B {
public:
    std::vector<int> vi;
    void operator()( B&& b){
        vi = std::move(b.vi);
    }
};

template<typename T2>
class A {
public:
    //Example 1
    template<typename T>
    void f(T&& t)
    {
        b_(std::move(t));
    }

    void f2(T2&& t)
    {
        b_(std::forward<T2>(t));
    }

    template<typename T>
    void f3(T&& t)
    {
        b_(std::forward<T>(t));
        b2_(std::forward<T>(t));
    }

private:
    B b_;
    B b2_;

};

int main()
{
    A<int> a;
    B b1;
    B b2;
    //a.f3(b1);
    a.f3(std::move(b2));  // no warning. :(

    /*
    std::vector<int> v1 = {1, 2, 3, 4, 5};
    std::vector<int> v2{};

    v2 = v1;

    v2 = std::move(v1);

    // This is invalid!  Clion (Clang-tidy) warns me.
    v1[3] = 5;
    */




}