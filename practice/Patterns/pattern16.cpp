// A
// B C
// D E F
// G H I J



#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the value of n"<<endl;

    int n;
    cin>>n;

    int row = 1;
    char start = 'A';
    while(row<=n){
        int col = 1;
        while (col<=row){
            cout<<start<<" ";
            start = start + 1;
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }
    
}