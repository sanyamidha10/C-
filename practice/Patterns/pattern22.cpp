// 1 1 1 1
//   2 2 2
//     3 3
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
        while(col<=n-row+1){
            cout<<row;
            col = col + 1;
        }
        
        cout<<endl;
        row = row + 1;
    }
}