#include<iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;

    // This mid calculation will give error in case of any values 2 raise to power 31 - 1
    // int mid = (start + end)/2;
    // So, an optimised way of calculating the same mid index is:
    int mid = start + (end - start)/2;

    while(start<=end){
        if (arr[mid] == key){
            return mid;
        }
        
        if(key>arr[mid]){
            start = mid+1;
        }

        else{  //key<arr[mid]
            end = mid-1;
        }

        mid = start + (end - start)/2;
    }


    return -1;

}


int main(){
int size;
cout<<"Enter the size of the array:"<<endl;
cin>>size;

int arr[100];
cout<<"Enter the elements of array in increasing order:"<<endl;
for(int i=0; i<size; i++){
    cin>>arr[i];
}

int key;
cout<<"Enter the element which you want to find:"<<endl;
cin>>key;


int ans = BinarySearch(arr, size, key);

if(ans == -1){
    cout<<"Oops! your given element is not present in the array.";
}
else{
    cout<<"Your element is present at index number "<<ans<<endl;
}

}