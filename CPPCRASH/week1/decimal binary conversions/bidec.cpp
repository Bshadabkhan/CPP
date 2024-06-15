#include<iostream>
#include<cmath>
using namespace std;

int decimalToBinaryMethod2(int n){
    //Bitwise method
    int binaryno = 0;
    int i = 0;
    while(n>0){
        int bit = (n & 1);
        binaryno = bit*pow(10, i++) + binaryno;
        n=n >>1;
    }
    return binaryno;
}

int binaryToDecimal(int n){
    int decimal = 0;
    int i=0;
    while(n){
        int bit = n % 10;
        decimal = decimal + bit * pow(2,i++);
        n/=10;
    }
    return decimal;
}
int main(){
    int binaryno;
    cin>>binaryno;
    cout<<binaryToDecimal(binaryno)<<endl;
}