#include<iostream>
using namespace std;


int area(char a, int x=0, int y=0 ){

    if(a=='s'){
        return x*x;
    }

    else if(a=='r'){
        return x*y;
    }
    else{
        return 3.14*x*x;
    }
}
int main(){
cout<<"calculate the area"<<endl;

cout<<area('s',2)<<endl;
cout<<area('r',2,2)<<endl;
cout<<area('c',2)<<endl;

}