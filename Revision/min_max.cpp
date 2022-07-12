#include<iostream>
using namespace std;

int getMin(int arr[], int size){
    int min = INT32_MAX;
    for (int i=0; i<size; i++){
        if (arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}

int getMax(int arr[], int size){
    int max = INT32_MIN;
    for (int i=0; i<size; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}



// void inputArray(int size, int arr[]){
//     cout<<"Enter the size of array: "<<endl;
//     cin>>size;
//     for (int i=0; i<size; i++){
//         cin>>arr[i];
//     }
// }


int main(){
    int arr[100];
    int size;
    cout<<"Enter the size of array: "<<endl;
    cin>>size;
    for (int i=0; i<size; i++){
        cin>>arr[i];
    }

    cout<<"The minimum element of array is: "<<getMin(arr, size)<<endl;
    cout<<"The maximum element of array is: "<<getMax(arr, size)<<endl;


}