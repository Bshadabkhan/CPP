//search for an element in an array

#include <iostream>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 3;
    bool found = false;

    for (int i = 0; i < n; ++i) {
        if (arr[i] == target) {
            found = true;
            std::cout << "Element " << target << " found at index " << i << std::endl;
            break;
        }
    }

    if (!found) {
        std::cout << "Element " << target << " not found in the array" << std::endl;
    }

    return 0;
}
