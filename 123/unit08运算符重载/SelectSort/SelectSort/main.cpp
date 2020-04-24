//
//  main.cpp
//  SelectSort

//

#include <iostream>
#include <iomanip>
#include "selectsort.hpp"

int main(int argc, const char * argv[]) {
    double x[]{3.0, 2.0, 8.0, 4.0, 9.0, 1.0, 5.0, 6.0 };
    for(auto i:x){
        std::cout<<std::fixed<<std::setprecision(2)<<i<<"  ";
    }
    std::cout<<std::endl;
    selectionSort(x, sizeof(x)/sizeof(x[0]));
    for(auto i:x){
        std::cout<<std::fixed<<std::setprecision(2)<<i<<"  ";
    }
    std::cout<<std::endl;
    return 0;
}
