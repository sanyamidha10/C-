#include<iostream>
using namespace std;

void swapAlternate(int arr[], int size){

    for(int i=0; i<size; i+=2){
        if (i+1<size){
            // swap(arr[i], arr[i+1]);
            int temp = arr[i+1];
            arr[i+1] = arr[i];
            arr[i] = temp;
        }
    }
}

void printArray(int arr[], int size){
     
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int size;
    cout<<"Enter the size of the array"<<endl;
    cin>>size;

    int arr[100];
    cout<<"Enter the elements of array"<<endl;
    for (int i=0; i<size; i++){
        cin>>arr[i];
    }

    swapAlternate(arr, size);
    cout<<"Swap Alternate implemented: "<<endl;
    printArray(arr, size);


}