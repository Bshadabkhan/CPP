#include <cstring>
#include <iostream>

int main() {
    const char* str1 = "Hello";
    const char* str2 = "Hello";
    
    if (strcmp(str1, str2) == 0) {
        std::cout << "C-style strings are equal." << std::endl;
    }

    std::string s1 = "Hello";
    std::string s2 = "Hello";
    
    if (s1 == s2) {
        std::cout << "std::strings are equal." << std::endl;
    }
    return 0;
}
