#include<iostream>
using namespace std;

bool LinearSearch(int arr[], int size, int toFound){

    for(int i=0; i<size; i++){
        if(arr[i] == toFound){
            return 1;
        }
    }

    return 0;

}

int main(){
    int size;
    cout<<"Enter the size of array"<<endl;
    cin>>size;

    int arr[100];
    cout<<"Enter the elements of array"<<endl;

    for (int i=0; i<size; i++){
        cin>>arr[i];
    }

    int toFound;
    cout<<"Enter the element which you want to find in the array:"<<endl;
    cin>>toFound;

    bool found = LinearSearch(arr, size, toFound);

    if(found){
        cout<<"Yes, "<<toFound<<" is present"<<endl;
    }
    else{
        cout<<"No, "<<toFound<<" is not present"<<endl;
    }

}

