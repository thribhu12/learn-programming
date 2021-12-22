#include<iostream>
using namespace std;


int main(){
    printf("Hello loops!!\n");
    // loop - circle - roation.
    // loop - while, for, do..while
    /*
        Syntax:
            while(condition){
                // code...
            }
    */
   int count = 1;
   while (count <= 10)
   {
       printf("count is %d\n",count);
      // if( ... )
         count++;
   }
   printf("count outside the while is %d",count);

   for(int count = 1;count <= 10;count++){
       // code.s
       printf("count is %d\n",count);
   }
   for(int i=0,j=10;i<5;i++,j--){
       cout<<"i value is "<<i<<" and j value is "<<j<<"\n";
   }

    int count = -1; //** 0 is always false; anyother number is alwwys considered as true 
    do {
        cout<<"count value is "<<count<<"\n";
    } while (count-- > -10);

    int i=0;
    cout<<i<<"\n";
    cout<<i++<<"\n";
    cout<<i<<"\n";

    int j=0;
    cout<<j<<"\n";
    cout<<++j<<"\n";
    cout<<j<<"\n";

    return 0;
}