// Initialise an Array with -1 in each block
 
#include <iostream>

int main() {
    const int SIZE = 10;  // Define the size of the array
    int arr[SIZE];        // Declare the array

    // Initialize each element to -1 using a loop
    for (int i = 0; i < SIZE; ++i) {
        arr[i] = -1;
    }

    // Output the array to verify initialization
    for (int i = 0; i < SIZE; ++i) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
