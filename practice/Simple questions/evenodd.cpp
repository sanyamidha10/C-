#include<iostream>
using namespace std;

// answer is 1 if even:
// answer is 0 if odd.

bool isEven(int n){
    // odd
    if(n&1){
        return 0;
    }
    // else 1
    return 1;
}

int main(){

    int number;
    cout<<"Enter the number"<<endl;
    cin>>number;

    if(isEven(number)){
        cout<<"Number is even.";
    }
    else{
        cout<<"Number is odd.";
    }


}