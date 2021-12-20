#include<iostream>
using namespace std;

int main(){
    // condition - if, else,  -- goto; --
    /*
    Syntax:
        simple if:
        if(condition){
            // some ...
            // some more code...
        }
        if - else :
        if(condition) {
            ... code
        }
        else {
            ... code
        }
        nested if :
        if(condtion){
            if(condition){

            }
        }
        if-else ladder :
        if(condition){

        }
        else if(condition){

        }
        else if(condtion){

        }
        else {

        }
    */
   int mathMarks;
   printf("Enter sudent math marks: ");
   scanf("%d",&mathMarks);
   if(mathMarks >= 35)
   {
       printf("Student is Pass");
   }
   else {
       printf("Student is failed!");
   }
   if(mathMarks <= 35){
       printf("Student got F grade");
   }
   else if(mathMarks > 35 && mathMarks <= 60){
       printf("Stu - C");
   }
   else if(mathMarks > 60 && mathMarks <= 80){
       printf("Student got B grade");
   }
   else if(mathMarks > 80) {
        printf("student got A+ grade");
   }

   int englishMarks;
   printf("Enter the english marks : ");
   scanf("%d",&englishMarks);
   if(mathMarks >= 35){
       if(englishMarks >= 35){
           printf("Studnet is passed in maths and engish");
       }
       else {
           printf("Student passed in math but failed in english");
       }
   }
    return 0;
}