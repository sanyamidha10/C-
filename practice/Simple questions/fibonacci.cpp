// 0 1 1 2 3 5 8 13 21

#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the value of n:"<<endl;

    int n;
    cin>>n;

    int a = 0;
    int b = 1;
    cout<<a<<" "<<b<<" ";
    for(int i = 1; i<=n; i++){
        int next_number = a + b;
        cout<<next_number<<" ";

        a = b;
        b = next_number;

    }
}