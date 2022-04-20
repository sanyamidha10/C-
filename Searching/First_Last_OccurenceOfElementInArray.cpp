#include<iostream>
using namespace std;

int FirstOccurence(int arr[], int n, int key){
    int start = 0;
    int end = n-1;

    int mid = start + (end-start)/2;
    int ans = -1;

    while(start<=end){
        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;
        }

        else if(key < arr[mid]){
            end = mid - 1;
        }

        else if(key > arr[mid]){
            start = mid + 1;
        }

    mid = start + (end - start)/2;
    }

    return ans;

}

int LastOccurence(int arr[], int n, int key){
    int start = 0;
    int end = n-1;

    int mid = start + (end-start)/2;
    int ans = -1;

    while(start<=end){
        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }

        else if(key < arr[mid]){
            end = mid - 1;
        }

        else if(key > arr[mid]){
            start = mid + 1;
        }

    mid = start + (end - start)/2;
    }

    return ans;

}


int main(){
    int arr[10] = {2, 3, 4, 5, 6, 6, 6, 6, 7, 7}; //keep in mind that it should be sorted array.
    cout<<"First occurence of element is at index "<<FirstOccurence(arr, 10, 6)<<endl;
    cout<<"Last occurence of element is at index "<<LastOccurence(arr, 10, 6)<<endl;
    return 0;
}

