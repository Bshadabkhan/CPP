//Reverse a given character array (string).

#include <iostream>
#include <cstring>

void reverseString(char str[]) {
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++) {
        std::swap(str[i], str[n - i - 1]);
    }
}

int main() {
    char str[] = "hello";
    reverseString(str);
    std::cout << str << std::endl; // Output: "olleh"
    return 0;
}
