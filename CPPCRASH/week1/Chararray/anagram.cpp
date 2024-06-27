//Check if two character arrays are anagrams of each other.

#include <iostream>
#include <cstring>
#include <algorithm>

bool areAnagrams(const char str1[], const char str2[]) {
    int n1 = strlen(str1);
    int n2 = strlen(str2);
    if (n1 != n2) {
        return false;
    }
    char copy1[n1 + 1], copy2[n2 + 1];
    strcpy(copy1, str1);
    strcpy(copy2, str2);
    std::sort(copy1, copy1 + n1);
    std::sort(copy2, copy2 + n2);
    return strcmp(copy1, copy2) == 0;
}

int main() {
    const char str1[] = "listen";
    const char str2[] = "silent";
    std::cout << (areAnagrams(str1, str2) ? "true" : "false") << std::endl; // Output: "true"
    return 0;
}
