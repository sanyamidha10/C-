//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1

// 3 triangles ----> 1.spaces   2.right triangle    3.right triangle



#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the value of n:"<<endl;

    int n;
    cin>>n;

    int row = 1;
    while(row<=n){

        // triangle of spaces
        int spaces = n - row;
        while(spaces){
            cout<<" ";
            spaces = spaces - 1;
        }


        // 2nd triangle
        int col = 1;
        while(col<=row){
            cout<<col;
            col = col + 1;
        }
        
        // 3rd triangle
        int start = row - 1;
        while(start){
            cout<<start;
            start = start - 1;
        }

        cout<<endl;
        row = row + 1;

    }

}