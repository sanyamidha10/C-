#include<iostream>
using namespace std;

int findPivot(int arr[], int size){
    int s = 0;
    int e = size - 1;
    int mid = s+(e-s)/2;

    while(s<e){
        if(arr[mid]>=arr[0]){
            s = mid + 1;
        }
        else{
            e = mid;
        }

        mid = s + (e-s)/2;
    }

    return s;

}


int main(){
int arr[6] = {3, 8, 10, 12, 17, 1};
cout<<"The pivot element in array is t index "<<findPivot(arr, 6)<<endl;
}