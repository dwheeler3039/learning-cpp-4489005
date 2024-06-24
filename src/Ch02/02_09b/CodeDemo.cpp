// Learning C++ 
// Exercise 02_09
// Strings, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <cstring>

int main(){
    const size_t LENGTH1 = 25;
    char array_str1[LENGTH1] = "hello you people! ";
    char array_str2[] = "what is going on?";

    std::string std_str1 = "hi again. ";
    std::string std_str2 = "how you doin?";

    strncat(array_str1, array_str2, LENGTH1);
    std::cout << array_str1 << std::endl;
    std::cout << std_str1 + std_str2 << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
