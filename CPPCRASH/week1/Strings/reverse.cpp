#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string str = "Hello, World!";
    std::reverse(str.begin(), str.end());
    std::cout << str << std::endl;  // Output: !dlroW ,olleH
    return 0;
}
