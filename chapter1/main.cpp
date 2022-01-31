#include <iostream>
#include <vector>


template<typename T>
void f(const T& param)
{
    std::cout << "T = " << typeid(T).name() << '\n'; // show T
    std::cout << "param = " << typeid(param).name() << '\n'; // show
}

class Widget{

public:
    int x;
    std::vector<bool> flags;
};

std::vector<bool> features(const Widget& w) {
    return w.flags;
}

int main()
{
    Widget w;
    //w.flags = {false,true,true,true,false,true,false,true,true,true,true,true,false,false,true,false,true,true};
    w.flags = {false,true,true,true,false,false,false,true,true,true,true,true,false,false,true,false,true,true};

    bool highPriority1 = features(w)[5];  // is w high priority?

    f(highPriority1);
    if(highPriority1)
    {
        std::cout << "yep\n";
    }
    std::cout << std::endl << std::endl;

    auto highPriority2 = features(w)[5];  // is w high priority?

    f(highPriority2);
    if(highPriority2)
    {
        std::cout << "yep\n";
    }
}



/*
template<typename T>
void f(const T& param);


std::vector<Widget> createVec(){
    auto vw = std::vector<Widget>();
    Widget w;
    vw.push_back(w);

    return vw;
}

auto createVec2(){
    auto vw = std::vector<Widget>();
    Widget w;
    vw.push_back(w);

    return vw;
}



int main()
{
    const int theAnswer = 42;
    auto x = theAnswer;
    auto y = &theAnswer;

    const auto vw = createVec();
    auto vw1 = createVec();


    const auto vw2 = createVec2();
    auto vw21 = createVec2();

    if (!vw.empty()) {
        std::cout << "vw" << std::endl;
        f(&vw[0]);
        //std::cout << vw.size() << std::endl;

        std::cout << "vw1" << std::endl;
        f(&vw1[0]);

        std::cout << "vw2" << std::endl;
        f(&vw2[0]);

        std::cout << "vw21" << std::endl;
        f(&vw21[0]);

    }
    // template function to
    // be called
    // factory function
    // init vw w/factory return
    // call f


    //std::cout << "Hello, World!" << std::endl;
    return 0;
}
*/