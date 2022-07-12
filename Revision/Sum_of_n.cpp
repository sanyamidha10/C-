#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the value of n:"<<endl;
    int n;
    cin>>n;

    int i = 1;
    int sum = 0;
    while(i<=n){
        sum = sum + i;
        i += 1;
    }

    cout<<"Value of sum is "<<sum;
}