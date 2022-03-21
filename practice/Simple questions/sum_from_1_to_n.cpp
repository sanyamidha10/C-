#include<iostream>
using namespace std;

int main(){


    cout<<"Enter the value of n: "<<endl;
    int n;
    cin>>n;


// While loop
    // int i = 1;
    // int sum = 0;
    // while(i<=n){
    //     sum = sum + i;
    //     i++;
    // }


// For loop
    int sum = 0;
    for (int i = 1; i<=n; i++){
        sum += i;
    }

    cout<<"Sum from numbers 1 to "<<n<<" is "<<sum;

    return 0;

}