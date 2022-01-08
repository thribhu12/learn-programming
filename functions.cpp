// functions;
// code reusability.
// code simplicity.
// code understandable.

// function-name, return type, arguments;

#include<iostream>
using namespace std;

int additionOfTwoNumbers(int a, int b) {
    int c;
    c = a+b;

    return c;
}

char printMyChar(){
    return 'a';
}

void printMyName(){
    cout<<"Lenoivo\n";
}

int main(){
    int a=4,b;
    // while(a-->0){
    // cin>>a>>b;
    // int result = additionOfTwoNumbers(a,b);
    // cout<<result;
    // }
        cout<<printMyChar();
    // }

    return 0;
}