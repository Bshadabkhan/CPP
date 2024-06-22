#include<iostream>
using namespace std;

int main(){

    int multipleof2[10] = {2,4,6,8,10,12,14,16,18,20};
    cout<<multipleof2[0]<<endl;
    cout<<multipleof2[1]<<endl;
    cout<<multipleof2[2]<<endl;
    cout<<multipleof2[9]<<endl;

    //traverse
    for(int index=0;index<=9;index++){
        cout<<multipleof2[index]<<" ";
    }


    return 0;
}