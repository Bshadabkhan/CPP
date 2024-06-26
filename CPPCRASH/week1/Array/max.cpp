//Maximum array in an element
#include <iostream>

int main() {
    int arr[] = {10, 20, 5, 30, 25};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];

    for (int i = 1; i < n; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    std::cout << "Maximum element: " << max << std::endl;

    return 0;
}
