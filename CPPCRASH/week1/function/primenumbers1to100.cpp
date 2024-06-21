//Write a function to print prime numbers from 1 to 100

#include <iostream>
#include <cmath> // For sqrt function
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false; // 1 and numbers less than or equal to 1 are not prime
    }
    if (num == 2) {
        return true; // 2 is a prime number
    }
    if (num % 2 == 0) {
        return false; // Other even numbers are not prime
    }
    // Check divisibility from 3 up to the square root of num
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) {
            return false; // Found a divisor, hence not prime
        }
    }
    return true; // If no divisors found, num is prime
}

// Function to print all prime numbers up to 100
void printPrimesUpTo100() {
    cout << "Prime numbers up to 100:" << endl;
    for (int i = 2; i <= 100; ++i) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    printPrimesUpTo100();

    return 0;
}
