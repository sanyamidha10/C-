#include<iostream>
#include<string>
using namespace std;


// *********object oriented*******
class Employee{
    public:
    string name;
    int salary;
};


int main()
{


    // ********Pointer***********
    // int a = 34;
    // int* pointerOfa = &a;
    // cout<<"value of a is "<<a<<endl;
    // cout<<"value of a is "<<*pointerOfa<<endl;
    // cout<<"value of address is "<<pointerOfa<<endl;
    // cout<<"value of address is "<<&a<<endl;

Employee san;
san.name = "Sanya";
san.salary = 100000;
cout<<"name "<<san.name<<" salary:"<<san.salary;


    return 0;
}