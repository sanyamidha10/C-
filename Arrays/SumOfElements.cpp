#include<iostream>
using namespace std;

int SumOfElements(int arr[], int size){

    int sum = 0;
    for (int i=0; i<size; i++){
        sum = sum + arr[i];
    }

    return sum;


}

int main(){
    int size;
    cout<<"Enter the size of array:"<<endl;
    cin>>size;

    int arr[100];
    cout<<"Give the elements of array:"<<endl;

    for (int i=0; i<size; i++){
        cin>>arr[i];
    }

    cout<<"Sum of all the elements of array = "<<SumOfElements(arr, size)<<endl;
}