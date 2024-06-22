//Write a function to populate an array with multiple of 10

#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    //printing
    for(int index=0;index<=size-1;index++){
        cout<< arr[index]<<" ";
    }
}

void storeMultipleof10(int num[],int size){
    int count = 1;
    for(int index=0;index<=9;index++){
        num[index] = 10 * count;
        count++;

    }
}

int main(){
    int arr[10];
    int size = 10;
    storeMultipleof10(arr,size);

    printArray(arr,size);

    return 0;
}