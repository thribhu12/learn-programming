#include<iostream>
using namespace std;

int main(){
    // array - It's collection of heterogenous(same data type) values.
    // Syntax  <data_type> <variable_name>[];
    // Syntax  <data_type> <variable_name>[(options size)];
    // array index starts from 0 always.
//     int arr[4]; // base address arr-100
//                     //              [100, 104, 108, 112];
//     // [0, 1, 2, 3]
//     int marksOfStudents[5];
//     cout<<"Enter the student marks\n";
//     for(int i=0;i<5;i++)
//     {
//         cout<<"Enter the "<<(i+1)<<"th student marks : ";
//         cin>>marksOfStudents[i];
//     }

// for(int i=0;i<5;i++){
//     // cout<<"Marks of "<<(i+1)<<"th student is "<<marksOfStudents[i]<<"\n";
//     if(marksOfStudents[i] >= 35)
//    {
//        printf("Student is Pass\n");
//    }
//    else {
//        printf("Student is failed!\n");
//    }
//    if(marksOfStudents[i] <= 35){
//        printf("Student got F grade\n");
//    }
//    else if(marksOfStudents[i] > 35 && marksOfStudents[i] <= 60){
//        printf("Stu - C\n");
//    }
//    else if(marksOfStudents[i] > 60 && marksOfStudents[i] <= 80){
//        printf("Student got B grade\n");
//    }
//    else if(marksOfStudents[i] > 80) {
//         printf("student got A+ grade\n");
//    }
// }

// Types - 1D, 2D, 3D;
/**
 * [1,2,3]
 * [4,5,6]
 * [7,8,9]
*/
/**
 * subjects/students
 *        0     1   2
 *      Eng maths science
 *0 A    14  16      20
 *1 B    17  20      9
 *2 C    20  9       5
*/
int noOfStudents;
int noOfSubjects;
cin>>noOfStudents;
cin>>noOfSubjects;
int marks[noOfStudents][noOfSubjects];
// nested for loop
// 1st loop is for looping through the rows, 2nd is for columns
for(int i=0;i<noOfStudents;i++){
    // we are loping throught rowsn;
    for(int j=0;j<noOfSubjects;j++){
        cin>>marks[i][j];
    }
}

// for(int i=0;i<noOfStudents;i++){
//     // we are loping throught rowsn;
//     for(int j=0;j<noOfSubjects;j++){
//         //cout<<"* ";//cout<<"("<<i<<" "<<j<<") ";
//         if(i == 0 || i == noOfStudents-1 || j == 0 || j == noOfSubjects-1)
//         cout<<"*_";
//         else
//         cout<<"__";
//     }
//     cout<<"\n";
// }


for(int i=0;i<noOfStudents;i++){
    // we are loping throught rowsn;
    for(int j=0;j<noOfSubjects;j++){
            if(marks[i][j] >= 35)
   {
       printf("Student is Pass\n");
   }
   else {
       printf("Student is failed!\n");
   }
   if(marks[i][j] <= 35){
       printf("Student got F grade\n");
   }
   else if(marks[i][j] > 35 && marks[i][j] <= 60){
       printf("Stu - C\n");
   }
   else if(marks[i][j] > 60 && marks[i][j] <= 80){
       printf("Student got B grade\n");
   }
   else if(marks[i][j] > 80) {
        printf("student got A+ grade\n");
   }
}
    }
    return 0;
}