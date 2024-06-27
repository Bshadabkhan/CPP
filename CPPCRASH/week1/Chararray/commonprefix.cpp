//Find the longest common prefix among a given set of character arrays

#include <iostream>
#include <vector>
#include <string>

std::string longestCommonPrefix(const std::vector<std::string>& strs) {
    if (strs.empty()) return "";
    std::string prefix = strs[0];
    for (const std::string& str : strs) {
        while (str.substr(0, prefix.size()) != prefix) {
            prefix = prefix.substr(0, prefix.size() - 1);
            if (prefix.empty()) return "";
        }
    }
    return prefix;
}

int main() {
    std::vector<std::string> strs = {"flow", "flower", "flight"};
    std::cout << longestCommonPrefix(strs) << std::endl; // Output: "fl"
    return 0;
}
