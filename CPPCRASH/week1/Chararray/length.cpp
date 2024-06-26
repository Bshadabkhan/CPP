//find length

#include<iostream>
using namespace std;

int getLength(const char* arr){
    int count = 0;
    int index = 0;
    while(arr[index] != '\0'){
        count++;
        index++;
    }
    return count;
}

int main(){

    const char* arr = "khan";
    cout<< getLength(arr) <<endl;

    return 0;
}