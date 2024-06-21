#include<iostream>
using namespace std;

int getMultiplication(int x,int y,int z){

    int result = x*y*z;
    return result;
}

void printNametenTimes(){
    for(int i=1;i<=10;i++){
        cout<<"Khan"<<endl;
    }
}

void printMultiples(int num){
    for(int i=1;i<=10;i++){
        cout<<num*i<<endl;
    }
}

int convertIntoCelcius(int far){
    int celcius=(far-32)*5/9;
    return celcius;
}

char convertUpperCase(char ch){
    char answer = ch - 'a' + 'A';
    return answer;
}

int main(){
    //function call
    
    // int multiplicationAnswer = getMultiplication(5,4,3);
    // cout<<multiplicationAnswer<<endl;

    // printNametenTimes();

    // int m=7;
    // printMultiples(m);

    // int far =32;
    // int ans = convertIntoCelcius(far);
    // cout<<"In cecious:"<<ans<<endl;


    char result = convertUpperCase('k');
    cout<<result<<endl;


    return 0;
}