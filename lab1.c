#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
Write a program that computes final marks for students in the course
CSCZ00 - Introduction to Bad Practices in Computation.

 The marks are stored in a 2D array thus:

           A1/20     A2/30   A3/50   Mid/50   Fin/100

student1    15         25       45     25       75
student2    18         28       49     47       94
student3    10         15       25     25       50
student4    20         30       50     50       100
student5    12         14       15     22       34
student6    17         28       21     39       77

The function has to compute and print a weighted average for the final
mark, such that:

Final Mark = (.1*A1) + (.15 *A2) + (.2 *A3) + (.25 *Mid) + (.3 *Fin)

*/
void calculate_marks(int students[6], int marks[6][5]) {

    // your code goes here

}

int main() {

    // declare student array
    int students[6] = {0, 0, 0, 0, 0, 0};
    // declare marks array
    int marks[6][5] = {
        {15,25,45,25,75},
        {18,28,49,47,94},
        {10,15,25,25,50},
        {20,30,50,50,100},
        {12,14,15,22,34},
        {17,28,21,39,77}
        };
    // calculate marks and populate student array
    calculate_marks(students, marks);
    // print student array
    for (int i = 0; i < 6; i++) {
        printf("student%d: %d\n", i+1, students[i]);
    }

}