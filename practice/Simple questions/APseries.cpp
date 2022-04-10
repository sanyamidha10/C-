#include<iostream>
using namespace std;

int AP(int n){

    int ap = 3*n+7;
    return ap;
}

int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    int answer = AP(n);
    cout<<"Answer is -->"<<answer<<endl;

}