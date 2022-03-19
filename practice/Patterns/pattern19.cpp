//       *
//     * *
//   * * *
// * * * *
// 1 while loop for row
// 
// 1 while lop for printing spaces --->calculate the logic of spaces () ---> n-row spaces
// 
// 1 while loop for printing * ---->calculate the logic of what to print in column(Here its specified stars)

#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the value of n:"<<endl;
    int n;
    cin>>n;

    int row = 1;
    while(row<=n){

        // for printing spaces
        int spaces = n - row;
        while(spaces){
            cout<<" ";
            spaces = spaces - 1;
        }

        // for printing stars
        int col = 1;
        while(col<=row){
            cout<<"*";
            col = col + 1;
        }

        cout<<endl;
        row = row + 1;
    }
}