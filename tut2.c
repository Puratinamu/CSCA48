#include<stdio.h>
#include<stdlib.h>
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

    // point p to the address of variable x
    p = &x;

    // derefence pointer p which points to x and assign it the value of y
    *p = y;

    // getting the address 2 "lockers" away from p and assign it the value of z
    *(p+2) = z;

    // set the value of y to the value of the address two spaces over from the address at p
    y = *(p+2);

}

/*

*/
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
void fire_turret(Battleship *shooter, Battleship *target) {
    
    shooter->ammunition -= shooter->cannons;

    if (strcmp(target->status, "healthy") == 0) {
        printf("%s (%s) has been damaged by %s!\n", target->name, target->status, shooter->name);
        target->status = "damaged";
    } else if (strcmp(target->status, "damaged") == 0) {
        printf("%s (%s) has been sunk by %s!\n", target->name, target->status, shooter->name);
        target->status = "sunk";
    }

}

void part2() {
    
    // name, cannons, ammunition, length, status
    Battleship iowa = {"USS Iowa", 12, 100, 270.36, "healthy"};

    Battleship yamato = {"IJN Yamato", 12, 100, 263.0, "healthy"};

    fire_turret(&iowa, &yamato); //have the iowa shoot at the yamato
    fire_turret(&iowa, &yamato); //have the iowa sink the yamato

}


/*
Write a function called count_repeats that takes a pointer to a string, its size, a pointer to an array of ints,
and the size of that array.

count_repeats counts how many times each character appears in the input string and updates that count
in the corresponding entry of the array.

    aaabc

    ascii:  a    b   c
    value:  3    1   1

Remember a character can be treated as an integer without context

*/
void count_repeats(char *string, int input_size, int *repeats, int repeats_size) {
    
   //code goes here
   for (int i = 0; i < repeats_size; i++) {
       repeats[i] = 0;
   }

   int j = 0;

   while (string[j] != '\0' && j < input_size) {
       repeats[(int) string[j]] += 1;
       j++;
   }

}


/*
This function concatenates strSrc at the end of strDest using pointers
*/
void stringConcatenate(char *strDest, char *strSrc) {
    
    //code goes here
    for (int i = strlen(strDest) + 1; i < strlen(strDest) + strlen(strSrc); i++) {
        strDest[i] = strSrc[i - strlen(strDest) - 1];
    }

}

void stringConcatenateExample(char *strDest, char *strSrc);


int main() {

    char *a = malloc(sizeof(char)*20);
    strcpy(a, "hello");
    char *b = malloc(sizeof(char)*20);
    strcpy(b, "asdfasdf");

    stringConcatenateExample(a, b);

    printf("%s\n", a);

    return 0;
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
