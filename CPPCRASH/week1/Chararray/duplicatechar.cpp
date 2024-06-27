//Remove duplicate characters from a character array.

#include <iostream>
#include <cstring>
#include <unordered_set>

void removeDuplicates(char str[]) {
    std::unordered_set<char> seen;
    int writeIndex = 0;
    int n = strlen(str);
    for (int i = 0; i < n; i++) {
        if (seen.find(str[i]) == seen.end()) {
            seen.insert(str[i]);
            str[writeIndex++] = str[i];
        }
    }
    str[writeIndex] = '\0';
}

int main() {
    char str[] = "abacdc";
    removeDuplicates(str);
    std::cout << str << std::endl; // Output: "abcd"
    return 0;
}
