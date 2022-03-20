// 1 2 3 4
//   2 3 4
//     3 4 
//       4

#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the value of n:"<<endl;

    int n;
    cin>>n;

    int row = 1;

    while(row<=n){
        int spaces = row - 1;
        while(spaces){
            cout<<" ";
            spaces = spaces - 1;
        }

        int col = 1;
        int value = row;
        while(col<=n-row+1){
            cout<<value;
            value = value + 1;
            col = col + 1;
        }
        
        cout<<endl;
        row = row + 1;

    }
}