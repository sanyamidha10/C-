#include<iostream>
using namespace std;


int total(int arr[]){
    int total = 0;
    for(int i=0; i<5; i++){
        total += arr[i];
    }
    return total;
}

int average(int arr[]){
     int total_marks = total(arr);

      int average;
      average = total_marks/5;

      return average;
}

int percentage(int arr[]){
    int total_marks = total(arr);
    int default_marks = 500;
    int percentage;
    // percentage = (total_marks/default_marks)*100;
    percentage = (total_marks*100)/default_marks;
    return percentage;
}

int main(){
    int arr[5];
    cout<<"Enter the marks of c:"<<endl;
    cin>>arr[0];
    cout<<"Enter the marks of c++:"<<endl;
    cin>>arr[1];
    cout<<"Enter the marks of Java:"<<endl;
    cin>>arr[2];
    cout<<"Enter the marks of DS:"<<endl;
    cin>>arr[3];
    cout<<"Enter the marks of OS:"<<endl;
    cin>>arr[4];

    int total_marks = total(arr);
    cout<<"Total marks are = "<<total_marks<<endl;
    int average_marks = average(arr);
    cout<<"AVerage marks are = "<<average_marks<<endl;
    int percentage_mark = percentage(arr);
    cout<<"Percentage marks are = "<<percentage_mark;



    
}