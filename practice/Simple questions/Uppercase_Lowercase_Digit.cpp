#include <iostream>
using namespace std;

int main(){

    cout<<"Enter the input "<<endl;
    char input;
    cin>>input;

    // 'A' = 65
    // 'a' = 97
    // '0' = 48


    if (input>='A' && input<='Z'){
        cout<<input<<" is an uppercase letter."<<endl;
    }

    else if (input>='a' && input<='z'){
        cout<<input<<" is a lower case letter."<<endl;
    }

    else if (input>='0' && input<='9'){
        cout<<input<<" is a digit."<<endl;
    }


    return 0;
}