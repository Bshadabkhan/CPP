//initialization of array with value equal to 0

#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    //printing
    for(int index;index<=size-1;index++){
        cout<< arr[index]<<" ";
    }

}

int main(){
    int arr[5]={-1};
    int size=5;
    printArray(arr,size);

    return 0;
}