// Flip 1 to 0 and 0 to 1 in an Array

#include<iostream>
using namespace std;



void printArray(int arr[],int size){
    //printing
    for(int index= 0;index< size;index++){
        cout<< arr[index]<<" ";
    }

}

void flipArray(int arr[],int size){
    for(int index=0;index<=size;index++){
        if(arr[index] == 0)
        arr[index] = 1;
        else if(arr[index]==1)
        arr[index] = 0;

    }
}

int main(){

    

    int arr[] =  {1,1,0,0,0,1,0,1};
    int size = 8;
    cout<<"before flipping: ";
    printArray(arr, size);
    cout<<endl;

    flipArray(arr,size);


    cout<<"after flipping: ";
    printArray(arr,size);
    cout<<endl;

    return 0;
}