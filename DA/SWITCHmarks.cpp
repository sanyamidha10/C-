#include<iostream>
using namespace std;

int main(){
    int marks;
    cout<<"Enter your marks: "<<endl;
    cin>>marks;

    switch (marks){
        case(marks>90): 
            cout<<"A";
            break;

        case(marks>80 && marks<=90): 
            cout<<"B";
            break;

        case(marks>70 && marks<=80):
        cout<<"C";
        break;

        default:
        cout<<"fail";
    }
}