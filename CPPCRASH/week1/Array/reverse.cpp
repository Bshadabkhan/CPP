// Write a Function to Reverse an Array

#include <iostream>

// Function to reverse an array
void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    // Swap elements from start to end
    while (start < end) {
        // Swap arr[start] and arr[end]
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move towards the middle
        start++;
        end--;
    }
}

int main() {
    const int SIZE = 5;
    int arr[SIZE] = {1, 2, 3, 4, 5};

    // Print the original array
    std::cout << "Original Array: ";
    for (int i = 0; i < SIZE; ++i) {
        std::cout << arr[i] << " ";
    }

    // Reverse the array
    reverseArray(arr, SIZE);

    // Print the reversed array
    std::cout << "\nReversed Array: ";
    for (int i = 0; i < SIZE; ++i) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
