//Check if a given character array (string) is a palindrome.

#include <iostream>
#include <cstring>

bool isPalindrome(const char str[]) {
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++) {
        if (str[i] != str[n - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    const char str[] = "radar";
    std::cout << (isPalindrome(str) ? "true" : "false") << std::endl; // Output: "true"
    return 0;
}
