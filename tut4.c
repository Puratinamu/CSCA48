#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int *newArray(int size) {

    int *array; // A pointer! not an array declaration

    array = (int*) calloc(size, sizeof(int)); // Get 'size' items large enough to hold one int each

    return array;

 }


void populate_array(int *array, int size) {

    // your code here using pointer arithmetic
    // populate the array such that array[i] = i, i < size
    for (int k = 0; k < size; k++) {
        *(array+k) = k; 
    }

}


void print_array(int *array, int size) {

    // your code here using pointer arithmetic
    // print each element of the array
    for (int k = 0; k < size; k++) {
        printf("%d", *(array+k)); 
    }
    printf("\n");

}


void free_array(int *array, int size) {

    // Option a)
    // for (int i = 0; i < size; i++) {
    //     free(*(array+i));
    // }

    // Option b)
    // for (int i=0; i<size; i++) {
    //     free(array+i);
    // }

    // Option c)
    free(array);

}


int *new2DArray(int sizeX, int sizeY) {
    int *array; // Still just a pointer!

    array = (int*) calloc(sizeX * sizeY, sizeof(int)); // cast the void pointer to an int pointer because Paco said so
    return array;
}


/*
Fill in the 2d array USING POINTER ARITHMETIC so that the [i][j]th entry is equal to (3*i) + (7*j)
*/
void populate_2d_array(int *array, int sizeX, int sizeY) {

    // your code goes here
    for (int i = 0; i < sizeX; i++) {
        for (int j = 0; j < sizeY; j++) {
            *(array + i + (j * sizeX)) = 3*i + 7*j;
            
        }
    }

}


void print_2d_array(int *array, int sizeX, int sizeY);


void part1() {
    int size;
    int *my_array;

    // get size
    printf("Please enter the size of the array\n");
    scanf("%d",&size);
    getchar();

    //create new array
    my_array = newArray(size);

    // null check
    if (my_array == NULL) {
        printf("Out of memory allocating array!\n");
        exit(1);
    }

    populate_array(my_array, size);

    print_array(my_array, size);

    free_array(my_array, size);
}

void part2() {
    int sizeX, sizeY;
    int *my_2d_array;

    // get x
    printf("Please enter the X size of the array\n");
    scanf("%d",&sizeX);
    getchar();
    // get y
    printf("Please enter the Y size of the array\n");
    scanf("%d",&sizeY);
    getchar();
    // new 2d array
    my_2d_array = new2DArray(sizeX, sizeY);

    if (my_2d_array == NULL) {
        printf("out of mem");
        exit(1);
    }

    populate_2d_array(my_2d_array, sizeX, sizeY);

    print_2d_array(my_2d_array, sizeX, sizeY);
}

int main() {
    
    char input[30];

    printf("Enter function to run.\n");
    scanf("%s", input);
    if (strcmp(input, "part1") == 0) {
        part1();
    }
    else if (strcmp(input, "part2") == 0) {
        part2();
    } else {
        printf("Unrecognized function name.\n");
    }
    return 0;
}


void print_2d_array(int *array, int sizeX, int sizeY) {

    for (int i = 0; i < sizeX; i++) {
        for (int j = 0; j < sizeY; j++) {
            printf("%d ", *(array + i + (j * sizeX)));
        }
        printf("\n");
    }
}