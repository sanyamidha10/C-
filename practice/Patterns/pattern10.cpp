// 1
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1


// ************2 ways***********:  


// #include<iostream>
// using namespace std;

// int main(){
//     cout<<"Enter the value of n:"<<endl;
//     int n;
//     cin>>n;

//     int row = 1;
//     while (row<=n){
//         int col = 1;
//         int value = row;
//         while(col<=row){
//             cout<<value;
//             value = value - 1;
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
    while (row<=n){
        int col = 1;
        
        while(col<=row){
            cout<<row-col+1;
            
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }

}