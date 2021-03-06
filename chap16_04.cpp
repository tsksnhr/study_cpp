#include "all.h"

// pred定義
bool pred1(int a){
    if(a%2==0) return true;
    else return false;
}
bool pred2(int a){
    if(a*2<10) return true;
    else return false;
}

// 自作none_ofの実装
auto my_none_of(auto first, auto last, auto pred){

    for(auto iter = first; iter != last; iter++){
        if(pred(*iter)) return false;
    }

    return true;
}

int main(){

    std::vector<int> v = {10, 11, 12, 13, 14, 15};
    std::vector<int> nv;

    std::cout << std::boolalpha;
    std::cout << my_none_of(std::begin(v), std::end(v), pred1) << std::endl; // false
    std::cout << my_none_of(std::begin(v), std::end(v), pred2) << std::endl; // true
    std::cout << my_none_of(std::begin(nv), std::end(nv), pred1) << std::endl; // true
    std::cout << my_none_of(std::begin(nv), std::end(nv), pred2) << std::endl; // true

    return 0;
}