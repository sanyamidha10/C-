#include<iostream>
using namespace std;

void sort01(int arr[], int size){
    int left =0, right = size-1;

    while(left<right){

        while(arr[left] == 0 && left<right){
            left++;
        }

        while(arr[right] == 1 && left<right){
            right--;
        }

        if(arr[left] == 1 && arr[right]==0 && left<right){
            swap(arr[left], arr[right]);
            left++;
            right--;
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
    int arr[100];

    cout<<"Enter the size of the array:"<<endl;
    cin>>size;

    cout<<"Enter the elements of array"<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    sort01(arr, size);
    printArray(arr, size);

}