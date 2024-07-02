//How do you iterate over each character in a std::string?

#include <iostream>
#include <string>

int main() {
    std::string str = "Hello, World!";
    
    for (char ch : str) {
        std::cout << ch << " ";
    }
    std::cout << std::endl; // Output: H e l l o ,   W o r l d !
    return 0;
}
