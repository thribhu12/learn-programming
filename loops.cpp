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
       count++;
   }
   printf("count outside the while is %d",count);
   
    return 0;
}