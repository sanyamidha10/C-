#include<iostream>
using namespace std;

int main(){

    cout<<"Enter the value of n "<<endl;
    int n;
    cin>>n;

    int i = 1;
    int sum = 0;

    while(i<=n){
        if (i % 2 == 0){
            sum = sum + i;
        }

        i++;
    }

    cout<<"Sum of even numbers from 1 to "<<n<<" is equal to "<<sum;

    return 0;
}