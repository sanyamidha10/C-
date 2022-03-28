// Given an integer number n, return the difference between the product and sum of its digits.

#include<iostream>
using namespace std;

void subtractProductAndSum(int number){

    int product = 1;
    int sum = 0;

    while(number!=0){
        int digit = number % 10;
        product = product * digit;
        sum = sum + digit;
        number = number/10;
    }
    int answer = product-sum;
    cout<< "the difference between the product and sum of digits is "<<answer;

}

int main(){
    cout<<"Enter the value of n:"<<endl;

    int number;
    cin>>number;
    

    subtractProductAndSum(number);
    

}