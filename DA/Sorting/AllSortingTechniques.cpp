#include <iostream>
using namespace std;

// **********insertion sort************
// void insertionSort(int arr[], int n){
//     int i, temp, j;
//     for (i=1; i<n; i++ ){
//         temp = arr[i];
//         j = i-1;
//         while(j>=0 && arr[j]<temp){
//             arr[j+1] = arr[j];
//             j--;
//         }

//         arr[j+1] = temp;
//     }
// }


// void BubbleSort(int arr[], int n)
// {
//     int i, j;
//     for (i=0; i<n-1; i++)
//     {
//         for(j=0; j<n-i-1; j++)
//         {
//             if(arr[j]>arr[j+1]){
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }
// }


// void selectionSort(int arr[], int n){
//     int i, j;
//     for (i=0; i<n-1; i++){
//         int minindex = i;
//         for (j=i+1; j<n; j++){
//             if (arr[j]<arr[minindex]){
//                 minindex = j;
//             }
//         }
//         if (minindex != i){
//             int temp = arr[minindex];
//             arr[minindex] = arr[i];
//             arr[i] = temp;
//         }
//     }
// }




void sortedArray(int arr[], int n){
    int i;
    for (i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){
    cout<<"Enter the number of elements: \n";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    selectionSort(arr, n);
    sortedArray(arr, n);
    return 0;
}