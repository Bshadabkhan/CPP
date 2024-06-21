// write a function to check whether someone is eligible for voting or not

#include<iostream>
using namespace std;

void toVote(int age){
    if(age>18){
        cout<<"Eligible to vote"<<endl;
    }
    else{
        cout<<"Not Eligible to vote"<<endl;
    }
}
int main(){

    int age = 17;
    toVote(age);

    return 0;
}