#include<iostream>
using namespace std;

int main(){

    // int budget;
    // cout<<"enter your budget: "<<endl;  
    // cin>> budget;
    // if(budget>2000000){
    //     cout<<"you can buy scorpio"<<endl;
    // }
    // else{
    //     cout<<"cannot buy scorpio"<<endl;
    // }
    // int age = 100;
    // if(age>18){
    //     cout<<"you can vote"<<endl;
    // }
    // else{
    //     cout<<"you cannot vote"<<endl;
    // }
    // int marks=55;
    // if(marks>90){
    //     cout<<"A"<<endl;
    // }
    // else if(marks>80){
    //     cout<<"B"<<endl;
    // }
    
    // else if(marks>70){
    //     cout<<"C"<<endl;
    // }
    
    // else if(marks>60){
    //     cout<<"D"<<endl;
    // }
    // else{
    //     cout<<"you failed";
    // }
    int height;
    cout<<"Enter height in feet"<<endl;
    cin>>height;
    
    int weight;
    cout<<"Enter your weight"<<endl;
    cin>>weight;

    if(height>5){
        if(weight>70){
            cout<<"you have a good BMI"<<endl;
        }
        else{
            cout<<"you dont have a good BMI"<<endl;
        }
    }
    else{
        cout<<"drink complain"<<endl;
    }
        
   



    return 0;
    
}