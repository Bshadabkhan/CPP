//Write a function to find Simple interest

#include<iostream>
using namespace std;

float simpleinterest(float a,float b,float c){
    return (a*b*c/100);
}

int main(){
    float a,b,c;
    cout<<"enter the principle,rate of interest,time"<<endl;
    cin>>a>>b>>c;
    float amount = simpleinterest(a,b,c);
    cout<<amount<<endl;
    return 0;
}