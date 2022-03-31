#include<iostream>
#include<math.h>
using namespace std;

int main(){
    cout<<"Enter the binary number which you want to convert into decimal:" <<endl;

    int n;
    cin>>n;

    int ans = 0, i = 0;
    while(n!=0){
        int digit = n%10;

        if(digit == 1){
            ans = ans + powf(2,i);
        }

        n = n/10;
        i++;
    }

    cout<<"Answer is: "<<ans;

}
