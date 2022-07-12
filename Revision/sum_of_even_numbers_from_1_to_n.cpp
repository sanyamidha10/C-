#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the value of n"<<endl;
    int n;
    cin>>n;

    int sum = 0;
    int i = 1;
    while(i<=n){
        if(i % 2 == 0){
            sum += i;
        }
        i += 1;
    }

    cout<<"value of sum is "<<sum<<endl;
}