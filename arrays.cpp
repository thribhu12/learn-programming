#include<iostream>
using namespace std;

int main(){
    // array - It's collection of heterogenous(same data type) values.
    // Syntax  <data_type> <variable_name>[];
    // Syntax  <data_type> <variable_name>[(options size)];
    // array index starts from 0 always.
    int arr[9] = {1,2,3,4,5,6,7,8,9}; // This array ccan fit 10 values
    cout<<arr[4]<<"\n";
    int i=0;
    bool b = true;
    while(b){
        cout<<"i value is "<<i<<"\n";
        i++;// i =5;
        if(i == 5)
            b = false;
    }    
    return 0;
}