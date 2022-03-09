#include<iostream>
using namespace std;

int main(){
    cout<<"enter the Fahrenheit value you want to convert into Celsius:"<<endl;

    float Fahrenheit;
    cin>>Fahrenheit;
    // C = 5/9(F-32)
    float celsius = (5.0/9) * (Fahrenheit-32);

    cout<<Fahrenheit<<" F = "<<celsius<<" C";

}