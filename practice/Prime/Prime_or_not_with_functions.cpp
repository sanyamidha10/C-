#include<iostream>
using namespace std;

// If input is Prime number then give output as 1
// If input is not a Prime number then give output as 0

bool isPrime(int n){

    for(int i=2; i<n; i++){
        if(n%i == 0){
            return 0;
        }
    }

    return 1;

}

int main(){

    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    if(isPrime(n)){
        cout<<"Its a prime number.";
    }
    else{
        cout<<"Its not a prime number.";
    }

}