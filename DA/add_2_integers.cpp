#include<iostream>
using namespace std;

int sum(int a, int b){
    int sum;
    sum = a + b;
    return sum;
}


int main(){
cout<<"Enter 2 integers: "<<endl;
int a;
int b;
cin>>a;
cin>>b;

cout<<"sum of integers is = "<<sum(a,b);
}