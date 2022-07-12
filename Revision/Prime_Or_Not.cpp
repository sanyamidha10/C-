#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the number"<<endl;
    int n;
    cin>>n;

    int i = 2;
    while(i<n){
        if(n % i == 0){
            cout<<n<<" is not a prime number.";
            return 0;
        }
        i += 1;
    }

    cout<<n<<" is a prime number";
    return 0;
}