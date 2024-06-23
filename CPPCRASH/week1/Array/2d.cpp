#include<iostream>
using namespace std;

int main(){

    //declaration
    // int arr[5][4];

    //initialisation
    // int arr[2][4]={
    //     {1,2,3,4},
    //     {5,6,7,8}
    //     };
        // cout<<arr[0][3]<<endl;
        // cout<<arr[1][2]<<endl;

        int arr[3][4]={{10,20,30,40},
        {11,12,13,14},
        {21,22,23,24}};
        
    int row = 3;
    int col = 4;

    //printing
    for(int row_index=0; row_index<=row-1;row_index++){
        for(int col_index=0;col_index<=col-1;col_index++){
            cout<<arr[row_index][col_index]<<" ";
        }
        cout<<endl;   
    }


    return 0;
}