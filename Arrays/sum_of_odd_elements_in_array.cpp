#include<iostream>
using namespace std;

int sum_of_odd(int arr[], int size){
    int sum =0;
    for(int i=0; i<size; i++){
        if (arr[i] % 2 == 1){
            sum += arr[i];
        }
    }
    return sum;
}

int main(){
    int arr[100];
    int size;
    cout<<"Enter the size of array: "<<endl;
    cin>>size;
    cout<<"Enter th elements of array: "<<endl;
    for (int i=0; i<size; i++){
        cin>>arr[i];
    }

    int ans = sum_of_odd(arr, size);
    cout<<"Sum of odd elements of array is = "<<ans;
    // sum_of_odd(arr, size);


    
}