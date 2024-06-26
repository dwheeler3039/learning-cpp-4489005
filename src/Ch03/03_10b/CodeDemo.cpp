// Learning C++ 
// Exercise 03_10
// Using Objects with Vectors, by Eduardo Corpeño 

#include <vector>
#include <iostream>
#include <string>
#include "cow.h"

int main(){
    std::vector<cow> cattle;

    cattle.push_back(cow("Besty", 6, cow_purpose::meat));
    cattle.push_back(cow("Beaver", 4, cow_purpose::hide));
    cattle.push_back(cow("Bork", 5, cow_purpose::pet));
    cattle.push_back(cow("Bad", 2, cow_purpose::dairy));

    std::cout << "The first cow is " << cattle.begin()->get_name() << std::endl;
    std::cout << "Index 1 is " << cattle[1].get_name() << std::endl;
    std::cout << "Next to last cow is " << prev(cattle.end(), 2)->get_name() << std::endl;
    std::cout << "Last cow is " << (cattle.end() -1)->get_name() << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
