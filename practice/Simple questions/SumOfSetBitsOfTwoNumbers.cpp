// a=2 ----> 10
// a =3 ----> 11
// setbits is the number of 1.
// total setbits in a and b = 3

#include<iostream>
using namespace std;

int setbitsOf_A(int a){
    int count = 0;

    while(a!=0){
        if (a&1){
            count = count + 1;
        }
        a = a>>1;
    }

    return count;

}

int setbitsOf_B(int b){
    int count = 0;

    while(b!=0){
        if (b&1){
            count = count + 1;
        }
        b = b>>1;
    }

    return count;

}


int main(){
    int a, b;
    cout<<"Enter the first number"<<endl;
    cin>>a;
    cout<<"enter the second number"<<endl;
    cin>>b;

    int ans1 = setbitsOf_A(a);
    int ans2 = setbitsOf_B(b);

    cout<<"Setbits of first number = "<<ans1<<endl;
    cout<<"Setbits of second number = "<<ans2<<endl;

    int total = ans1+ans2;
    cout<<"Total setbits in both the numbers are = "<<total<<endl;



}