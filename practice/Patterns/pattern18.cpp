// D
// C D 
// B C D 
// In this, we have to calculate the starting character of each row, and further increment it by one.


#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the value of n:"<<endl;
    int n;
    cin>>n;

    int row = 1;
    while(row<=n){
        int col = 1;
        char start = 'A'+ n - row;
        while(col<=row){
            cout<<start;
            start = start + 1;
            col = col + 1;

        }
        cout<<endl;
        row = row + 1;
    }

    

}
