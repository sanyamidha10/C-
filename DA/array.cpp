#include<iostream>
using namespace std;

int main(){
    int arr[7], i;
    cout<<"Enter the elements in array"<<endl;
    for (i=0; i<7; i++){
        cin>>arr[i];
    }
    cout<<"Elements of array are: "<<endl;
    for(int i=0; i<7; i++){
        cout<<arr[i]<<" ";
    }
}