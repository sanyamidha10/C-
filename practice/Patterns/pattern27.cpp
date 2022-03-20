// 1 2 3 4 5 5 4 3 2 1
// 1 2 3 4 * * 4 3 2 1
// 1 2 3 * * * * 3 2 1
// 1 2 * * * * * * 2 1
// 1 * * * * * * * * 1

// 3 triangles ---> 1.right triangle    2.stars   3.right triangle

#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the value of n:"<<endl;

    int n;
    cin>>n;

    int row = 1;
    while(row<=n){


        // 1st triangle
        int col = 1;
        while(col<=n-row+1){
            cout<<col;
            col = col + 1;
        }


        // 2nd triangle -stars
        int j = 1;
        while(j<=((row-1)*2)){
            cout<<"*";
            j = j + 1;
        }


        // 3rd triangle
        int k = n-row+1;
        while(k>=1){
            cout<<k;
            k = k - 1;
        }

        cout<<endl;
        row = row + 1;
    }
}
