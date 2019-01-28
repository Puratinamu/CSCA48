#include<stdio.h>
#include <string.h>

/*

Part 1: Pointers

Part 2: Typedef structs

Part 3: Strings

*/

void part1() {

    int x = 12;
    int y = 13;
    int z = 17;
    int *p;

    p = &x;

    *p = y;

    *(p+2) = z;

    y = *(p+2);

}


typedef struct {

    char *name;

    int cannons;

    int ammunition;

    float length;

    char *status;

} Battleship;


/*
Fire the guns!
*/
void fire_turret(Battleship shooter, Battleship target) {
    
    shooter.ammunition -= shooter.cannons;

    if (strcmp(target.status, "healthy") == 0) {
        printf("%s (%s) has been damaged by %s!\n", target.name, target.status, shooter.name);
        target.status = "damaged";
    } else if (strcmp(target.status, "damaged") == 0) {
        printf("%s (%s) has been sunk by %s!\n", target.name, target.status, shooter.name);
        target.status = "sunk";
    }

}

void part2() {
    
    Battleship iowa = {"USS Iowa", 12, 100, 270.36, "healthy"};

    Battleship yamato = {"IJN Yamato", 12, 100, 263.0, "healthy"};

    fire_turret(iowa, yamato); //have the iowa shoot at the yamato
    // fire_turret(iowa, yamato); //have the iowa sink the yamato

}


/*
Write a function called count_repeats that takes a pointer to a string and a pointer to an array of ints.
count_repeats counts how many times each character appears in the input string and updates that count
in the corresponding entry of the array.
*/
void count_repeats(char *string, int *repeats) {
    
   //code goes here

}


/*
This function concatenates strSrc at the end of strDest using pointers
*/
void stringConcatenate(char *strDest, char *strSrc) {
    
    //code goes here

}

void stringConcatenateExample(char *strDest, char *strSrc) {
    
   while(*strDest)
      strDest++;
     
   while(*strSrc) {
      *strDest = *strSrc;
      strSrc++;
      strDest++;
   }
   *strDest = '\0';

}

int main() {

    part1();
    // part2();

    char a[30] = "Hello";
    char b[30] = " There";
    stringConcatenateExample(a, b);
    printf("%s\n", a);

    return 0;
}



















