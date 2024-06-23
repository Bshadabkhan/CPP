#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    //printing
    for(int index;index<=size-1;index++){
        cout<< arr[index]<<" ";
    }

}
/// @brief 
/// @return 
int main(){

    int arr[]={10,20,30,40};
    int size = 4;
    printArray( arr,size);

    // int arr[]=,{10,20,30,40,50};
    // int sum=0;
    // for(int index=0;index<=4;index++){
    //     sum = sum + arr[index];
    // }
    // cout<<"Total sum:"<<sum<<endl;

    return 0;
}