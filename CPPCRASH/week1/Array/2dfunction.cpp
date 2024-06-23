#include<iostream>
using namespace std;
 
void print2DArray(int arr[][4],int rowSize, int colSize){
    cout<<"Printing the 2D array:"<<endl;
    //printing
    for(int row_index=0; row_index<rowSize;row_index++){
        for(int col_index=0;col_index<colSize;col_index++){
            cout<<arr[row_index][col_index]<<" ";
        }
        cout<<endl;   
    }
}

int main(){

    int arr[3][4];
    int row = 3;
    int col = 4;

    for(int row_index=0; row_index<=row-1;row_index++){
        for(int col_index=0;col_index<=col-1;col_index++){
            cout<<"Enter the input for arr["<<row_index<<"]["<<col_index<<"]:";
            cin>>arr[row_index][col_index];
        }
        cout<<endl;   
    }

   
    print2DArray(arr,row,col);


    return 0;
}