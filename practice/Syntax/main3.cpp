#include <iostream>
#include <string>
using namespace std;

// ***Arrays***
int main(){
    // int marks[] = {1,2,3};
    // cout<<marks[1];   //returns 2
    // return 0;

    // ********1d array*******
    // int marks[4];
    // for (int i=0; i<4; i++){
    //     cout<<"Enter the marks of "<<i<<"th student"<<endl;
    //     cin>>marks[i];
    // }

    // for (int i=0; i<4; i++){
    //     cout<<"Marks of "<<i<<"th student is "<<marks[i]<<endl;
    // }


    // *********2d array*********
    // int array2d[2][3] = {
    //     {1,2,3},
    //     {4,5,6}
    // } ;

    // for (int i=0; i<2; i++){
        
    //     for(int j=0; j<3; j++){
    //      cout<<"The value at "<<i<<","<<j<<"is "<<array2d[i][j]<<endl;   
    //     }
    // }


    // ******string******
    string name ="Sanya";
    cout<<name<<endl;
    cout<<"length of string is "<<name.length()<<endl;
    cout<<"substring "<<name.substr(0,3)<<endl;
    cout<<"substring "<<name.substr(2,2);
    

}

