// A
// B C
// C D E
// D E F G

// for 1st method:
// for 1st row and 1st column:
// row + col -1 = 1
// So we have to map this 1 to A:
// To do this we add 'A' - 1 on both sides.
// row + col - 1 + 'A' - 1 = 1 + 'A' - 1
// row + col + 'A' - 2 = 'A'

// #include<iostream>
// using namespace std;


// 2 methods:

// int main(){
//     cout<<"Enter the value of n"<<endl;

//     int n;
//     cin>>n;

//     int row = 1;
//     while(row<=n){
//         int col = 1;
//         while(col<=row){
//             char ch = row + col + 'A' - 2;
//             cout<<ch;
//             col = col + 1;

//         }
//         cout<<endl;
//         row = row + 1;
//     }
// }

#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the value of n:"<<endl;
    
    int n;
    cin>>n;

    int row = 1;
    while(row<=n){
        int col = 1;
        char ch = 'A' + row - 1;
        while(col<=row){
            cout<<ch;
            ch = ch + 1;
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }

}