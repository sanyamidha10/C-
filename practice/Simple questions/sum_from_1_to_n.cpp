#include<iostream>
using namespace std;

int main(){


    cout<<"Enter the value of n: "<<endl;
    int n;
    cin>>n;

    int i = 1;
    int sum = 0;
    while(i<=n){
        sum = sum + i;
        i++;
    }

    cout<<"Sum from numbers 1 to "<<n<<" is "<<sum;

    return 0;

}