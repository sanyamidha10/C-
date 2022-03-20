//       1
//     2 3
//   4 5 6
//7 8 9 10

#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the value of n:"<<endl;

    int n;
    cin>>n;

    int row = 1;
    int start = 1;
    while(row<=n){
        int spaces = n - row;
        while(spaces){
            cout<<" ";
            spaces = spaces - 1;
        }

        int col = 1;
        while(col<=row){
            cout<<start;
            start = start + 1;
            col = col + 1;
        }

        cout<<endl;
        row = row + 1;
    }
}