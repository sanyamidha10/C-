// * * * *
// * * *
// * * 
// *
//  Here no while lop is required for spaces

#include<iostream>
using namespace std;

int main(){
    cout<<"enter the value of n:"<<endl;
    int n;
    cin>>n;

    int row = 1;
    while(row<=n){
        int col = 1;
        while(col<=n-row+1){
            cout<<"* ";
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }

}
