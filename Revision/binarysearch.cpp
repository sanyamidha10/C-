#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
      int start = 0;
      int end = size-1;

      int mid = start + (end - start)/2;

      while(start<=end){
        if (arr[mid] == key){
            return mid;
        }

        if(arr[mid]<key){
            start = mid+1;
        }
        else{
            end = mid-1;
        }

        mid = start + (end - start)/2;
      }  


      return -1;
    }

int main(){
int size;
cout<<"Enter the size of the array: "<<endl;
cin>>size;

int arr[100];
cout<<"Enter the elements of array: "<<endl;
for(int i=0; i<size; i++){
    cin>>arr[i];
}

int key;
cout<<"Enter the element which you want to find: "<<endl;
cin>>key;

int ans = binarySearch(arr, size, key);

if(ans == -1){
    cout<<"Oops! this element is not present!";
}
else{
    cout<<"Your element is present at index number "<<ans;
    }

}