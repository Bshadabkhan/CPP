#include<iostream>
using namespace std;

int main(){

    //input  in array

    int arr[5];
    for(int index=0;index<=4;index++){
        cout<<"Enter the value for arr["<<index<<"]:";
        cin>>arr[index];
        cout<<endl;
    }
    for(int index=0;index<=4;index++){
        cout<<arr[index]<<" ";
    }

    return 0;
}