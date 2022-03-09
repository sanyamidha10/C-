#include<iostream>
using namespace std;

int main(){
    cout<<"Enter any number to know whether its prime or not:"<<endl;
    int n;
    cin>>n;

    int i = 2;

    while (i<n){
        if (n % i == 0){
            cout<<n<<" is not prime";
            return 0;
        }
        i++;
    }

    cout<<n<<" is prime";
    return 0;
}