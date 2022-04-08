//
// Created by Paul Prestopnik on 4/8/22.

#include <iostream>

class Investment{
public:
    Investment(bool m) : makeMoney(m) {}
    bool makeMoney;
};

void makeLogEntry(Investment* pInvestment){
    if (pInvestment->makeMoney){
        std::cout << "Yay!";
    }
    else{
        std::cout << "Oh no!";
    }
}

auto delInvmt = [](Investment* pInvestment)
{
    makeLogEntry(pInvestment);
    delete pInvestment;
};

template<typename... Ts>
std::unique_ptr<Investment, decltype(delInvmt)>
makeInvestment(Ts&&... params)
{
// custom
// deleter
// (a lambda
// expression)
// revised
// return type
    std::unique_ptr<Investment, decltype(delInvmt)> // ptr to be
    pInv(nullptr, delInvmt);
}


Investment* old_style_factory(bool makeMoney){

    Investment* myobj = new Investment(makeMoney);

    return myobj;
}

auto factory_wrapper(bool makeMoney){

    std::unique_ptr<Investment> p;
    p.reset(old_style_factory(makeMoney);
    return p;
}

int main(){
    std::unique_ptr<Investment> pInvest1 = makeInvestment();
    std::unique_ptr<Investment, decltype(delInvmt)> pInvest2 = makeInvestment();
    auto pInvest3 = makeInvestment();

    auto pf = factory_wrapper(true);

}



