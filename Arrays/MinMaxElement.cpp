#include<iostream>
using namespace std;

int MinElement(int arr[], int size){

    int min = INT32_MAX;

    for(int i=0; i<size; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }

    return min;

}

int MaxElement(int arr[], int size){

    int max = INT32_MIN;

    for(int i=0; i<size; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }

    return max;

}

int main(){

    int size;
    cout<<"Enter size of the array: "<<endl;
    cin>>size;

    int arr[100];
    cout<<"Enter the elements of array: "<<endl;

    for (int i=0; i<size; i++){
        cin>>arr[i];
    }

    cout<<"Vale of Minimum element in the array is = "<<MinElement(arr, size)<<endl;
    cout<<"Value of Maximum element in the array is = "<<MaxElement(arr, size);

}