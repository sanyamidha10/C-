// Formula for storing a number(eg. 123) in:

// 1.Same flow:(answer = 0)
// formula--> answer = (answer*10) + digit  ----->123

// Reverse Flow:(answer=0, i=0)
// formula--> answer =  (digit*pow(10,i)) + answer ----->321

#include<iostream>
#include<math.h>
using namespace std;


int main(){
    cout<<"Enter the decimal number which you want to convert into binary number: "<<endl;

    int n;
    cin>>n;

    int ans = 0;
    int i = 0;

    while(n!=0){
        int bit = n & 1;
        ans = (bit * powf(10, i)) + ans;
        n = n>>1;
        i++;
    }

    cout<<"Answer is "<<ans<<endl;

}