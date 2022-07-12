#include<iostream>
using namespace std;

int main(){

int max[3][4];
for(int i=0; i<3; i++){
    for(int j=0; j<4; j++){
        cin>>max[i][j];
    }
}
// int l = max[0][0];

// for(int i=0; i<3; i++){
//     for(int j=0; j<4; j++){
//         if(max[i][j]>l){
//             l = max[i][j];
//         }
//     }
// }

// cout<< l;

for(int i=0; i<3; i++){
    for(int j=0; j<4; j++){
        cout<<max[i][j];
    }
}


}