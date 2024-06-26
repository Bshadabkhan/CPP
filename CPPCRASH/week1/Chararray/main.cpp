#include<iostream>
using namespace std;

int main(){

    //declare
    //char arr[10];
   // cout<<arr[3]<<endl;

//    char arr[10] = "khan";
//    cout<<arr[0]<<endl;
//    cout<<arr[1]<<endl;
//    cout<<arr[2]<<endl;
//    cout<<arr[3]<<endl;

//    cout<<"printing 4th index:"<<arr[4]<<endl;//null character
//    int asciiValue = arr[4];
//    cout<<asciiValue<<endl;

// char arr[4];
// arr[0] = 'a';
// arr[1]='b';
// arr[2]='\0';

int arr[4] = {1,2,3,4};
cout<<arr<<endl;// o/p base address

char brr[5] = "love";
cout<<brr<<endl;//o/p is possible
for(int i = 0;i<=5;i++){
    cout<<brr[i] <<" ";
}




    return 0;
}